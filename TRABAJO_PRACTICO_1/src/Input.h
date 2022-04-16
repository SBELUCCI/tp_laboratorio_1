/*
 * Input.h
 *
 *  Created on: 11 abr. 2022
 *      Author: Sofia Belucci
 */

#ifndef INPUT_H_
#define INPUT_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * @fn float getFloat(char[], float, float)
 * @brief Funci�n que contiene n�meros flotantes. En la validaci�n, si ocurre un error retorna a 0, sino retorna al n�mero.
 *
 * @param mensaje
 * @param minimo
 * @param maximo
 * @return
 */
float getFloat(char mensaje[], float minimo, float maximo);

/**
 * @fn int getInt(char[])
 * @brief Esta funci�n contiene n�meros enteros.
 *
 * @param mensaje
 * @return
 */
int getInt(char mensaje[]);

#endif /* INPUT_H_ */
