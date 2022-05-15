/*
 * ArrayPassenger.c
 *
 *  Created on: 11 may. 2022
 *      Author: Sofia Belucci
 */

#include "ArrayPassenger.h"

int incrementarId() {

	static int id = 1000;
	id++;
	return id;
}

int inicializarPasajero(Pasajero array[], int len) {
	int retorno = -1;

	if (array != NULL && len > 0) {
		for (int i = 0; i < len; i++) {
			array[i].isEmpty = 1;

		}
	}
		return retorno;
}

int cargarPasajero(Pasajero array[], int len){

	int retorno = -1;
	int indexDesocupado;

	if (array != NULL && len > 0) {
		indexDesocupado = buscarIndexIsEmpty(array, len);
		if(indexDesocupado != -1){
			printf("Ingrese el nombre del pasajero: \n");
			fflush(stdin);
			scanf("%s", array[indexDesocupado].nombre);
			printf("Ingrese el apellido del pasajero: \n");
			fflush(stdin);
			scanf("%s", array[indexDesocupado].apellido);
			printf("Ingrese el precio del vuelo del pasajero: \n");
			scanf("%.2f", &array[indexDesocupado].precio);
			printf("Ingrese el código de vuelo del pasajero: \n");
			fflush(stdin);
			scanf("%s", array[indexDesocupado].codigoVuelo);
			printf("Ingrese el tipo de pasajero: \n");
			scanf("%d", &array[indexDesocupado].tipoPasajero);
			array[indexDesocupado].id = incrementarId();
			array[indexDesocupado].isEmpty = 0;
			mostrarUnPasajero(array[indexDesocupado]);

			return 0;


}


int ingresarPasajero(Pasajero array[], int len, int id, char nombre[],
	char apellido[], float precio, int tipoPasajero, char codigoVuelo[]) {


// crear funcion mostrar pasajero

	}

}
return retorno;
}

//mostrar un asociado, mostrar todos juntos

int buscarIndexIsEmpty(Pasajero array[], int len) {

	int retorno = -1;

			if(array != NULL && len > 0)
			{
				for(int i = 0; i < len; i++)
				{
					if(array[i].isEmpty == 1)
					{
						retorno = i;
						break;
					}
				}

			}

		return retorno;
}

void mostrarUnPasajero(Pasajero unPasajero){

	if(unPasajero.isEmpty == 0){

		printf("%s %s %.2f %s %d", unPasajero.nombre, unPasajero.apellido, unPasajero.precio, unPasajero.codigoVuelo, unPasajero.tipoPasajero);
	}
}


 int removerPasajero(Pasajero* array, int len, int id)
 {
 int retorno = -1;
	int index;
	if (array != NULL && len > 0 && id > 0) {
		index = buscarIndexPorId(array, len, id);
		if (index != -1) {

			mostrarPasajero(array[index]);
			array[indexDesocupado].isEmpty = 1;
			retorno = 0;
		}
		return retorno;
	}
 }
/*
 int encontrarPasajeroPorId(Pasajero* list, int len,int id)
 {
 return NULL
 }

 int modificarPasajero(Pasajero* list, int len, int id){
 }


 int clasificarPasajero(Pasajero* list, int len, int order)
 {
 return 0;
 }

 int printPassenger(Pasajero* list, int length)
 {
 return 0;
 }

 */

