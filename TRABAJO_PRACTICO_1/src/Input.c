/*
 * Input.c
 *
 *  Created on: 11 abr. 2022
 *      Author: Sofia Belucci
 */
#include "Input.h"

int getInt(char mensaje[]) {
	int numero;
	printf("%s", mensaje);
	scanf("%d", &numero);
	return numero;

}

float getFloat(char mensaje[], float minimo, float maximo) {
	float numero;
	printf("%s", mensaje);
	scanf("%f", &numero);
	if (numero < minimo || numero > maximo) {
		printf("Error. Vuelva a ingresar");
		return 0;
	} else {
		return numero;
	}
}

