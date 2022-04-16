/*
 * MostrarResultados.h
 *
 *  Created on: 15 abr. 2022
 *      Author: Sofia Belucci
 */

#ifndef MOSTRARRESULTADOS_H_
#define MOSTRARRESULTADOS_H_

#include <stdio.h>
#include <stdlib.h>


float MostrarResultadoAerolineas(float *kilometrosIngresados, float *precioVueloAerolineas, float *costoDebitoAerolineas,
		float *costoCreditoAerolineas, float *costoBitcoinAerolineas,
		float *costoPrecioPorKilometroAerolineas);

float MostrarResultadoLatam(float *precioVueloLatam, float *costoDebitoLatam,
		float *costoCreditoLatam, float *costoBitcoinLatam,
		float *costoPrecioPorKilometroLatam,
		float *costoDiferenciaDePrecio);

#endif /* MOSTRARRESULTADOS_H_ */
