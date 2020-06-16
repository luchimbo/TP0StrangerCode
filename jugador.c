#include <stdio.h>
#include "demogorgon.h"

const int DEF_ANIMO_JUGADOR = 0;
const char DEF_NIVEL_CONFIANZA_JUGADOR = 'w';
const float DEF_FUERZA_PSIQUICA = -1.0F;

int main(){

	int animo = DEF_ANIMO_JUGADOR;
	char confianza = DEF_NIVEL_CONFIANZA_JUGADOR;
	float fuerza_psiquica = DEF_FUERZA_PSIQUICA;  

	comenzar_enfrentamiento();

	animo = recibir_animo();

	printf("Animo recibido: %i\n", animo);

	confianza = recibir_confianza();

	printf("Confianza recibida: %c\n", confianza);
	
	fuerza_psiquica = recibir_fuerza_psiquica(animo, confianza);

	printf("Fuerza psiquica recibida: %f\n", fuerza_psiquica);

	resultado_enfrentamiento(fuerza_psiquica);


return 0;
}