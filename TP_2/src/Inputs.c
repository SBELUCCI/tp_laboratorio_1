/*
 * Inputs.c
 *
 *  Created on: 9 may. 2022
 *      Author: Sofia Belucci
 */

#include "Inputs.h"

int esNumerica(char *cadena) {
	int i = 0;
	int retorno = 1;
	if (cadena != NULL && strlen(cadena) > 0) {
		while (cadena[i] != '\0') {
			if (cadena[i] < '0' || cadena[i] > '9') {
				retorno = 0;
				break;
			}
			i++;
		}
	}
	return retorno;
}

int getNumeroInt(int *pResultado) {
	int retorno = -1;
	char buffer[64];
	if (pResultado != NULL) {
		if (myGets(buffer, sizeof(buffer)) == 0 && esNumerica(buffer)) {
			*pResultado = atoi(buffer);
			retorno = 0;
		}

	}
	return retorno;
}

int myGets(char *cadena, int longitud) {
	if (cadena != NULL && longitud > 0
			&& fgets(cadena, longitud, stdin) == cadena) {
		fflush(stdin); // LINUX-> __fpurge o WIN-> fflush o MAC-> fpurge
		if (cadena[strlen(cadena) - 1] == '\n') {
			cadena[strlen(cadena) - 1] = '\0';
		}
		return 0;
	}
	return -1;
}

int getNumInt(int *pNumeroIngresado, char *mensaje, char *mensajeError, int maximo,
		int minimo, int maximoDeReintentos) {

	int auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if (pNumeroIngresado != NULL && maximo >= minimo
			&& maximoDeReintentos >= 0) {
		do {
			printf("%s", mensaje);
			fflush(stdin);
			if (getNumeroInt == 1) {
				if (auxNumeroIngresado >= minimo
						&& auxNumeroIngresado <= maximo) {
					*pNumeroIngresado = auxNumeroIngresado;
					retorno = 0;
					break;
				} else {
					printf("%s", mensajeError);
					maximoDeReintentos--;
					retorno = -1;
				}
			}
		} while (maximoDeReintentos > 0);
	}

	return retorno;
}

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

int validarLetras(char cadena[]) {
	int retorno = 0;
	int len = strlen(cadena);

	if (cadena != NULL) {
		for (int i = 0; i < len; i++) {
			if ((cadena[i] >= 'A' && cadena[i] <= 'Z')
					|| (cadena[i] >= 'a' && cadena[i] <= 'z')
					|| cadena[i == ' ']) {
				retorno = 1;
			} else {
				retorno = 0;
				break;
			}
		}
	}
	return retorno;
}

/*int getArrayChar(char cadena[], int len, char *mensaje, char *mensajeError, int maximoDeReintentos) {

	char auxCadena[100];
	int retorno;
	retorno = -1;

	if (cadena != NULL && maximoDeReintentos >= 0) {
		do {
			printf("%s", mensaje);
			fflush(stdin);
			if (getNumeroInt == 1) {
				 {
					strncpy(cadena, auxCadena, len);
					retorno = 0;
					break;
				} else {
					printf("%s", mensajeError);
					maximoDeReintentos--;
					retorno = -1;
				}
			}
		} while (maximoDeReintentos > 0);
	}
}

//char getChar(char mensaje[])
 *
 * */

