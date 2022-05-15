/*
 * ArrayPassenger.h
 *
 *  Created on: 11 may. 2022
 *      Author: Sofia Belucci
 */

#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_

#include <stdio.h>
#include <stdlib.h>

struct {

	int id;
	char nombre [51];
	char apellido [51];
	float precio;
	char codigoVuelo[11];
	int tipoPasajero;
	int estadoVuelo;
	int isEmpty;

}typedef Pasajero;

int incrementarId();
int inicializarPasajero(Pasajero array[], int len);
int cargarPasajero(Pasajero array[], int len);

#endif /* ARRAYPASSENGER_H_ */
