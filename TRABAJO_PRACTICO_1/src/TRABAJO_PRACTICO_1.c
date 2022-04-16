/*
 ============================================================================
 Name        : TRABAJO_PRACTICO_1.c
 Author      : Sofia Belucci
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Input.h"
#include "Submenu.h"
#include "CalculosCostos.h"
#include "MostrarResultados.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcionSeleccionada;
	float kilometrosIngresados;

	float precioVueloAerolineas = 0;
	float costoDebitoAerolineas;
	float costoCreditoAerolineas;
	float costoBitcoinAerolineas;
	float costoPrecioPorKilometroAerolineas;

	float precioVueloLatam = 0;
	float costoDebitoLatam;
	float costoCreditoLatam;
	float costoBitcoinLatam;
	float costoPrecioPorKilometroLatam;

	float costoDiferenciaDePrecio;

	int flagResultadosCalculados = -1;

	do {
		printf("\n ================================================== \n");
		printf("\t \t MENÚ PRINCIPAL \n");
		printf("================================================== \n \n");
		printf("1) Ingresar los Kilómetros (km = %.2f) \n",
				kilometrosIngresados);
		printf(
				"2) Ingresar el precio de los vuelos \n -El precio de Aerolineas Argentinas: %.2f \n -El precio de Latam:  %.2f \n",
				precioVueloAerolineas, precioVueloLatam);
		printf("3) Calcular todos los costos\n");
		printf("4) Informar los resultados\n");
		printf("5) Carga forzada de datos\n");
		printf("6) Salir \n \n");
		printf("================================================== \n");
		opcionSeleccionada = getInt("\n Ingrese la opción deseada:  ");

		switch (opcionSeleccionada) {

		case 1:
			kilometrosIngresados = getFloat(
					"Ingrese los kilometros correspondientes:  ", 1, 40000);
			break;

		case 2:
			SubMenu(&precioVueloAerolineas, &precioVueloLatam);
			break;

		case 3:
			// AEROLINEAS ARGENTINAS
			if (kilometrosIngresados > 0 && precioVueloAerolineas > 0
					&& precioVueloLatam > 0) {

				CalculoDebito(&costoDebitoAerolineas, precioVueloAerolineas);
				CalculoCredito(&costoCreditoAerolineas, precioVueloAerolineas);
				CalculoBitcoin(&costoBitcoinAerolineas, precioVueloAerolineas);
				CalculoPrecioKilometro(&costoPrecioPorKilometroAerolineas,
						precioVueloAerolineas, kilometrosIngresados);
				CalculoDiferenciaDePrecio(&costoDiferenciaDePrecio,
						precioVueloAerolineas, precioVueloLatam);
				// LATAM
				CalculoDebito(&costoDebitoLatam, precioVueloLatam);
				CalculoCredito(&costoCreditoLatam, precioVueloLatam);
				CalculoBitcoin(&costoBitcoinLatam, precioVueloLatam);
				CalculoPrecioKilometro(&costoPrecioPorKilometroLatam,
						precioVueloLatam, kilometrosIngresados);
				CalculoDiferenciaDePrecio(&costoDiferenciaDePrecio,
						precioVueloAerolineas, precioVueloLatam);
				flagResultadosCalculados = 1;
			} else {
				printf(
						"Ingresar los datos correspondientes. Reintentelo nuevamente");
			}
			break;
		case 4:
			if (flagResultadosCalculados == 1) {

				MostrarResultadoAerolineas(&kilometrosIngresados,
						&precioVueloAerolineas, &costoDebitoAerolineas,
						&costoCreditoAerolineas, &costoBitcoinAerolineas,
						&costoPrecioPorKilometroAerolineas);

				// LATAM
				MostrarResultadoLatam(&precioVueloLatam, &costoDebitoLatam,
						&costoCreditoLatam, &costoBitcoinLatam,
						&costoPrecioPorKilometroLatam,
						&costoDiferenciaDePrecio);
			} else {
				printf("Debe calcular antes de mostrar los resultados");
			}
			break;
		case 5:
			kilometrosIngresados = 7090;
			precioVueloAerolineas = 162965;
			precioVueloLatam = 159339;
			CalculoDebito(&costoDebitoAerolineas, precioVueloAerolineas);
			CalculoCredito(&costoCreditoAerolineas, precioVueloAerolineas);
			CalculoBitcoin(&costoBitcoinAerolineas, precioVueloAerolineas);
			CalculoPrecioKilometro(&costoPrecioPorKilometroAerolineas,
					precioVueloAerolineas, kilometrosIngresados);
			CalculoDiferenciaDePrecio(&costoDiferenciaDePrecio,
					precioVueloAerolineas, precioVueloLatam);
			// LATAM
			CalculoDebito(&costoDebitoLatam, precioVueloLatam);
			CalculoCredito(&costoCreditoLatam, precioVueloLatam);
			CalculoBitcoin(&costoBitcoinLatam, precioVueloLatam);
			CalculoPrecioKilometro(&costoPrecioPorKilometroLatam,
					precioVueloLatam, kilometrosIngresados);
			CalculoDiferenciaDePrecio(&costoDiferenciaDePrecio,
					precioVueloAerolineas, precioVueloLatam);
			MostrarResultadoAerolineas(&kilometrosIngresados,
					&precioVueloAerolineas, &costoDebitoAerolineas,
					&costoCreditoAerolineas, &costoBitcoinAerolineas,
					&costoPrecioPorKilometroAerolineas);

			// LATAM
			MostrarResultadoLatam(&precioVueloLatam, &costoDebitoLatam,
					&costoCreditoLatam, &costoBitcoinLatam,
					&costoPrecioPorKilometroLatam, &costoDiferenciaDePrecio);
			break;
		case 6:
			printf("\n ¡Gracias por utilizar nuestro servicio!");
			break;

		default:
			printf(
					" \n La opción es incorrecta. Ingrese nuevamente otro número \n");
			break;
		}

	} while (opcionSeleccionada != 6);

	return 0;
}
