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
 * @brief Función que contiene números flotantes. En la validación, si ocurre un error retorna a 0, sino retorna al número.
 *
 * @param mensaje
 * @param minimo
 * @param maximo
 * @return
 */
float getFloat(char mensaje[], float minimo, float maximo);

/**
 * @fn int getInt(char[])
 * @brief Esta función contiene números enteros.
 *
 * @param mensaje
 * @return
 */
int getInt(char mensaje[]);

#endif /* INPUT_H_ */
