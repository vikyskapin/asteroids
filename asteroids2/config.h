#ifndef _CONFIG_H_
#define _CONFIG_H_

#define PI 3.14159265358979323

#define VENTANA_ANCHO 1000
#define VENTANA_ALTO 800

#define JUEGO_FPS 100
#define DT (1.0/JUEGO_FPS)

#define MAX_COORDENADAS 2

//ASTEROIDES
#define ROCK1 "ROCK1"
#define ROCK2 "ROCK2"
#define ROCK3 "ROCK3"
#define ROCK4 "ROCK4"

#define CANT_INICIAL_ASTEROIDES 4
#define CANT_EXTRA_ASTEROIDES 2

#define ASTEROIDE_RADIO_CHICO 8
#define ASTEROIDE_RADIO_MEDIANO 16
#define ASTEROIDE_RADIO_GRANDE 32
#define VELOCIDAD_ASTEROIDE_ORIGINAL 1000.0
#define VELOCIDAD_ASTEROIDE_OFFSET 100.0

//NAVE
#define NAVE "SHIP"
#define CHORRO "THURST"

#define NAVE_POTENCIA_PASO 1000
#define NAVE_ROTACION_PASO (PI/20)
#define ESCALA_NAVE 1
//valores iniciales
#define NAVE_VIDAS_INICIALES 4
#define NAVE_POTENCIA_INICIAL 0
#define NAVE_X_INICIAL VENTANA_ANCHO/2
#define NAVE_Y_INICIAL VENTANA_ALTO/2
#define NAVE_VX_INICIAL 0
#define NAVE_VY_INICIAL 0
#define NAVE_ANGULO_INICIAL (PI/2)

//SHOTS
#define SHOT "SHOT"
#define VELOCIDAD_DISPARO 1000.0
#define TIEMPO_VIDA_SHOT 0.7
#define ESCALA_DISPARO 5



#endif 