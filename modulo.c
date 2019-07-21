#include "modulo.h"
#include <string.h>

bool graficador_inicializar(const char *fn){
	
	FILE *fp;
	
	fp=fopen(fn,"rb"); 
	if (fp==NULL)
		return false;

	for(int k=0;k<MAX_SPRITES;k++){

		//sprite = realloc(sprite, sizeof(sprite_t)*(k+1));
		fread(&(sprite[k].nombre),sizeof(char),10,fp);//cargo el nombre
		fread(&(sprite[k].n),sizeof(uint16_t),1,fp);//cargo el n
		

		sprite[k].cords=malloc(sizeof(float*)*sprite[k].n*2);//pido memoria para la matriz dinamica de 2 columnas
		
		for(int j=0;j<(int)sprite[k].n;j++){
			fread(&sprite[k].cords[j][0],sizeof(float),1,fp);//cargo la matriz
			fread(&sprite[k].cords[j][1],sizeof(float),1,fp);//cargo la matriz
		}
	}	
	fclose(fp);

	return true;
}


bool graficador_dibujar(SDL_Renderer *r,const char *nombre, float escala, float x, float y, float angulo){

	int i,j;

	for(i=0; i<MAX_SPRITES; i++){
		if(!strcmp(sprite[i].nombre, nombre))
			break;
	}
	
	//cargo las coordenadas que quiero graficar rotadas en el angulo correspondiente en una nueva matriz auxiliar para no modificar los datos iniciales. 
	float **objeto;
	objeto = matriz_a_vector(sprite[i].cords, sprite[i].n);
	if (objeto==NULL)
		return false;
	rotar(objeto, sprite[i].n, angulo);	
	
	for(j = 0; j < sprite[i].n -1 ; j++){//grafico la matriz rotada, desplazada en x e y; 
		SDL_RenderDrawLine(
			r,
			objeto[j][0] * escala + x,
			-objeto[j][1] * escala + y,
			objeto[j+1][0] * escala + x,
			-objeto[j+1][1] * escala + y 
		);
	}	

	destruir_vector(objeto,sprite[i].n);

	return true;
}

void graficador_finalizar() 
{
	for(int i=0; i<MAX_SPRITES; i++)
		free(sprite[i].cords);
}


