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

/**
 * @fn float MostrarResultadoAerolineas(float*, float*, float*, float*, float*, float*)
 * @brief Muestra los resultados de los calculos de los costos de Aerolineas Aergentinas
 *
 * @param kilometrosIngresados
 * @param precioVueloAerolineas
 * @param costoDebitoAerolineas
 * @param costoCreditoAerolineas
 * @param costoBitcoinAerolineas
 * @param costoPrecioPorKilometroAerolineas
 * @return
 */

float MostrarResultadoAerolineas(float *kilometrosIngresados, float *precioVueloAerolineas, float *costoDebitoAerolineas,
		float *costoCreditoAerolineas, float *costoBitcoinAerolineas,
		float *costoPrecioPorKilometroAerolineas);

/**
 * @fn float MostrarResultadoLatam(float*, float*, float*, float*, float*, float*)
 * @brief Muestra los resultados de los calculos de costos de Latam
 *
 * @param precioVueloLatam
 * @param costoDebitoLatam
 * @param costoCreditoLatam
 * @param costoBitcoinLatam
 * @param costoPrecioPorKilometroLatam
 * @param costoDiferenciaDePrecio
 * @return
 */

float MostrarResultadoLatam(float *precioVueloLatam, float *costoDebitoLatam,
		float *costoCreditoLatam, float *costoBitcoinLatam,
		float *costoPrecioPorKilometroLatam,
		float *costoDiferenciaDePrecio);

#endif /* MOSTRARRESULTADOS_H_ */
