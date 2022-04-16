/*
 * Submenu.c
 *
 *  Created on: 11 abr. 2022
 *      Author: Sofia Belucci
 */

#include "Submenu.h"


void SubMenu(float *precioAerolineas, float *precioLatam) {

	int opcionIngresada;
do{
	printf("================================================== \n");
	printf("\t \t PRECIO DE VUELOS \n");
	printf("================================================== \n");
	printf("1) Ingresar el precio de vuelo con Aerolineas Argentinas \n");
	printf("2) Ingresar el precio de vuelo con Latam \n");
	printf("3) Volver al Menú Principal \n");
	printf("================================================== \n");
	opcionIngresada = getInt("Ingrese una opción:  ");

	switch (opcionIngresada){

	case 1:

		*precioAerolineas = getFloat("Ingrese el precio de vuelo con Aerolineas Argentinas: ",1,90000);
		break;

	case 2:
		*precioLatam = getFloat("Ingrese el precio de vuelo con Latam:  ",1,90000);
		break;
	case 3:
		printf("Volviendo al Menú Principal... \n \n");
		break;
	default:
		printf("Opcion incorrecta.");
		break;
	}

}while((opcionIngresada != 3));

}
