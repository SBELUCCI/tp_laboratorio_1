/*
 ============================================================================
 Name        : TP_2.c
 Author      : Sofia Belucci
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Inputs.h"
#include "ArrayPassenger.h"
#include "Submenu.h"


int main(void) {
	setbuf(stdout, NULL);

	int opcionSeleccionadaMenu;
	Pasajero pasajeros[4];


	do {
			printf("\n================================================== \n");
			printf("\t \t MENÚ PRINCIPAL \n");
			printf("================================================== \n \n");
			printf("1) Dar el ALTA a un pasajero \n");
			printf("2) Modificar datos de un pasajero ingresando su n° de ID \n");
			printf("3) Dar la BAJA a un pasajero \n");
			printf("4) Informar datos de pasajeros \n");
			printf("5) Carga forzada de datos \n");
			printf("6) Salir \n \n");
			printf("================================================== \n");
			opcionSeleccionadaMenu = getInt("\n Ingrese la opción deseada:  ");

			switch (opcionSeleccionadaMenu) {

			case 1:

				if(cargarPasajero(pasajeros,2)== 0){
					printf("oka\n");
				}else{
					printf("no\n");
				}



				break;

			case 2:

				break;

			case 3:

				break;
			case 4:

				break;
			case 5:
				break;
			case 6:
				printf("\n ¡Gracias por utilizar nuestro servicio!");
				break;

			default:
				printf(
						" \n La opción es incorrecta. Ingrese nuevamente los datos correspondientes \n");
				break;
			}

		} while (opcionSeleccionadaMenu != 6);

		return 0;
	}



