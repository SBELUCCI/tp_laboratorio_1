/*
 * CalculosCostos.h
 *
 *  Created on: 14 abr. 2022
 *      Author: Sofia Belucci
 */

#ifndef CALCULOSCOSTOS_H_
#define CALCULOSCOSTOS_H_

#include <stdio.h>
#include <stdlib.h>

#define BITCOIN 4606954.55

//AEROLINEAS ARGENTINAS

void CalculoDebito(float *costoDebito, float precioVuelo);
void CalculoCredito(float *costoCredito, float precioVuelo);
void CalculoBitcoin(float *costoBitcoin, float precioVuelo);
void CalculoPrecioKilometro(float *costoPrecioPorKilometro, float precioVuelo,
		float kilometrosIngresados);
void CalculoDiferenciaDePrecio(float *costoDiferenciaDePrecio,
		float precioVueloAerolineas, float precioVueloLatam);

#endif /* CALCULOSCOSTOS_H_ */
