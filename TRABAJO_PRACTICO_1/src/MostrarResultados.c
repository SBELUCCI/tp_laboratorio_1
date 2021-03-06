/*
 * MostrarResultados.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Sofia Belucci
 */

#include "MostrarResultados.h"

float MostrarResultadoAerolineas(float *kilometrosIngresados,
		float *precioVueloAerolineas, float *costoDebitoAerolineas,
		float *costoCreditoAerolineas, float *costoBitcoinAerolineas,
		float *costoPrecioPorKilometroAerolineas) {


	printf("\n ----------------------------RESULTADOS------------------------------ \n");
	printf("\n Los Km totales ingresados: %.2f \n \n", *kilometrosIngresados);
	printf("\n El precio de Vuelo con Aerolineas Argentinas:  %.2f",
			*precioVueloAerolineas);
	printf("\n El precio con Tarjeta de Debito para Aerolineas Argentinas es:   %.2f",
			*costoDebitoAerolineas);
	printf("\n El precio con Tarjeta de Credito para Aerolineas Argentinas es:  %.2f",
			*costoCreditoAerolineas);
	printf("\n El precio con Bitcoin Aerolineas Argentinas: %f",
			*costoBitcoinAerolineas);
	printf("\n El precio unitario de Aerolineas Argentinas: %.2f \n",
			*costoPrecioPorKilometroAerolineas);
	printf("----------------------------------------------------------------------\n");

	return 0;
}

float MostrarResultadoLatam(float *precioVueloLatam, float *costoDebitoLatam,
		float *costoCreditoLatam, float *costoBitcoinLatam,
		float *costoPrecioPorKilometroLatam, float *costoDiferenciaDePrecio) {


	printf("\n El precio de Vuelo con Latam: %.2f", *precioVueloLatam);
	printf("\n El precio con Tarjeta de Debito para Latam es:   %.2f",
			*costoDebitoLatam);
	printf("\n El precio con Tarjeta de Credito para Latam es:  %.2f",
			*costoCreditoLatam);
	printf("\n El precio con Bitcoin Latam: %f", *costoBitcoinLatam);
	printf("\n El precio unitario de Latam: %.2f \n \n",
			*costoPrecioPorKilometroLatam);
	printf("\n La diferencia de costo de Latam con Aerolineas es de:  %.2f \n",
			*costoDiferenciaDePrecio);
	printf("----------------------------------------------------------------------\n");


	return 0;
}
