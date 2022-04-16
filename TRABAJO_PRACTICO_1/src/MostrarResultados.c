/*
 * MostrarResultados.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Sofia Belucci
 */


#include "MostrarResultados.h"

float MostrarResultadoAerolineas(float *kilometrosIngresados, float *precioVueloAerolineas, float *costoDebitoAerolineas,
		float *costoCreditoAerolineas, float *costoBitcoinAerolineas,
		float *costoPrecioPorKilometroAerolineas) {

	printf("\n Los Km totales ingresados: %.2f \n", *kilometrosIngresados);
	printf("\n El precio de Vuelo con Aerolineas Argentinas:  %.2f\n", *precioVueloAerolineas);
	printf("\n El precio con Tarjeta de Debito para Aerolineas Argentinas es:   %.2f", *costoDebitoAerolineas);
	printf("\n El precio con Tarjeta de Credito para Aerolineas Argentinas es:  %.2f", *costoCreditoAerolineas);
	printf("\n El precio con Bitcoin Aerolineas: %f", *costoBitcoinAerolineas);
	printf("\n El precio unitario Aerolineas: %.2f", *costoPrecioPorKilometroAerolineas);
}

float MostrarResultadoLatam(float *precioVueloLatam, float *costoDebitoLatam,
		float *costoCreditoLatam, float *costoBitcoinLatam,
		float *costoPrecioPorKilometroLatam,
		float *costoDiferenciaDePrecio) {

	printf("\n El precio de Vuelo con Latam: %.2f \n", *precioVueloLatam);
	printf("\n El precio con Tarjeta de Debito para Latam es:   %.2f", *costoDebitoLatam);
	printf("\n El precio con Tarjeta de Credito para Latam es:  %.2f", *costoCreditoLatam);
	printf("\n El precio con Bitcoin Latam: %f", *costoBitcoinLatam);
	printf("\n El precio unitario Latam: %.2f \n", *costoPrecioPorKilometroLatam);
	printf("\n La diferencia de costo de Latam con Aerolineas es de:  %.2f \n", *costoDiferenciaDePrecio);
}
