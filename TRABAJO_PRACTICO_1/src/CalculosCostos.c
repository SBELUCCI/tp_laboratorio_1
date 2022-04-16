/*
 * CalculosCostos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: Sofia Belucci
 */

#include "CalculosCostos.h"
#define BITCOIN 4606954.55

void CalculoDebito(float *costoDebito, float precioVuelo) {

	float descuento = 10;
	float valorADescontar;

	valorADescontar = precioVuelo * (descuento / 100);
	*costoDebito = precioVuelo - valorADescontar;

}

void CalculoCredito(float *costoCredito, float precioVuelo) {

	float interes = 25;
	float valorAIncrementar;

	valorAIncrementar = precioVuelo * (interes / 100);
	*costoCredito = precioVuelo + valorAIncrementar;

}

void CalculoBitcoin(float *costoBitcoin, float precioVuelo) {

	*costoBitcoin = precioVuelo / BITCOIN;

}

void CalculoPrecioKilometro(float *costoPrecioPorKilometro, float precioVuelo,
		float kilometrosIngresados) {

	*costoPrecioPorKilometro = precioVuelo / kilometrosIngresados;

}

void CalculoDiferenciaDePrecio(float *costoDiferenciaDePrecio,
		float precioVueloAerolineas, float precioVueloLatam) {

	*costoDiferenciaDePrecio = precioVueloAerolineas - precioVueloLatam;

}

