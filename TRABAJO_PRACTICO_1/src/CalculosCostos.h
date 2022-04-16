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


/**
 * @fn void CalculoDebito(float*, float)
 * @brief Esta función calcula el precio con tarjeta de débito.
 *
 * @param costoDebito
 * @param precioVuelo
 */

void CalculoDebito(float *costoDebito, float precioVuelo);

/**
 * @fn void CalculoCredito(float*, float)
 * @brief Calcula el precio con tarjeta de crédito.
 *
 * @param costoCredito
 * @param precioVuelo
 */
void CalculoCredito(float *costoCredito, float precioVuelo);

/**
 * @fn void CalculoBitcoin(float*, float)
 * @brief Calcula el precio del viaje con Bitcoin
 *
 * @param costoBitcoin
 * @param precioVuelo
 */
void CalculoBitcoin(float *costoBitcoin, float precioVuelo);

/**
 * @fn void CalculoPrecioKilometro(float*, float, float)
 * @brief Calcula el precio unitario. O sea, precio del viaje por kilometro.
 *
 * @param costoPrecioPorKilometro
 * @param precioVuelo
 * @param kilometrosIngresados
 */
void CalculoPrecioKilometro(float *costoPrecioPorKilometro, float precioVuelo,
		float kilometrosIngresados);

/**
 * @fn void CalculoDiferenciaDePrecio(float*, float, float)
 * @brief Calcula la diferencia del precio del vuelo entre Aerolineas Argentinas y Latam.
 *
 * @param costoDiferenciaDePrecio
 * @param precioVueloAerolineas
 * @param precioVueloLatam
 */
void CalculoDiferenciaDePrecio(float *costoDiferenciaDePrecio,
		float precioVueloAerolineas, float precioVueloLatam);

#endif /* CALCULOSCOSTOS_H_ */
