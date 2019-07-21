#ifndef _CONFIG_H_
#define _CONFIG_H_

#define PI 3.14159265358979323846
#define DT (1.0/JUEGO_FPS)

#define VENTANA_ANCHO 1000
#define VENTANA_ALTO 800

#define JUEGO_FPS 100
#define JUEGO_COMBUSTIBLE_INICIAL 9999
#define JUEGO_COMBUSTIBLE_RADIANES 1
#define JUEGO_COMBUSTIBLE_POT_X_SEG 1
#define JUEGO_COMBUSTIBLE_POT_x_TECLA 1
#define MAX_COORDENADAS 2

#define TIEMPO_DORMIR 3000

//ASTEROIDES

#define CANT_INICIAL_ASTEROIDES 4
#define CANT_SUB_ASTEROIDES 2

//NAVE

#define NAVE_POTENCIA_PASO 1000

#define NAVE_ROTACION_PASO (PI/20)
#define NAVE_POTENCIA_INICIAL 0
#define PUNTAJE_INICIAL 0

#define ESCALA_NAVE 1
#define NAVE_X_INICIAL 500
#define NAVE_Y_INICIAL 400
#define NAVE_VX_INICIAL 0
#define NAVE_VY_INICIAL 0
#define NAVE_VIDAS_INICIALES 4

#define ACELERACION_INICIAL_X 0
#define ACELERACION_INICIAL_Y 0
#define NAVE_ANGULO_INICIAL (PI/2)

//SHOTS

#define VELOCIDAD_DISPARO 1000.0
#define TIEMPO_VIDA_SHOT 0.7
#define ESCALA_DISPARO 5


typedef struct{
	char nombre[10];
	uint16_t n;
	float (*cords)[2]; //para poder llenarla me pedia un vector dinamico
}sprite_t;


//sprite_t *sprite;//puntero a estructura de sprites global que lleno en la funcion

typedef enum
{
	FALSE,
	NAVE_DESTRUIDA,
	ASTEOROIDE_DESTRUIDO,
	FALLA_MEMORIA,
	ASTEOROIDES_DESTRUIDOS
}status_t;


#endif // _CONFIG_H_
