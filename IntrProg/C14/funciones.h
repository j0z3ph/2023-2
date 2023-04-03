/**
 * @file funciones.h
 * @author Jose Luis
 * @brief Biblioteca de funciones
 * @version 0.1
 * @date 2023-03-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

/**
 * @brief Devuelve la suma acumulada desde 1 hasta n
 * 
 * @param n Limite superior.
 * @return int Suma acumulada. Devuelve -1 si no es posible hacer la suma.
 */
int suma(int n);

/**
 * @brief Imprime los elementos de un arreglo de enteros
 * 
 * @param arr Arreglo de enteros
 * @param n Tamanio del arreglo
 */
void imprimeArreglo(int arr[], int n);

/**
 * @brief Encuentra el elemento mas grande de un arreglo de enteros
 * 
 * @param arr Arreglo de enteros
 * @param n Tamanio del arreglo
 * @return int El valor mas grande
 */
int elMasGrande(int arr[], int n);

/**
 * @brief Limpia la pantalla
 * 
 */
void clearScreen();

/**
 * @brief Realiza una busqueda binaria de un numero
 * 
 * @param arr Arreglo ordenado
 * @param tamanio Tamanio del arreglo
 * @param lost Numero a buscar
 * @return int 0 si no se encuentra. 1 si se encuentra.
 */
int busquedaBinaria(int arr[], int tamanio, int lost);

/**
 * @brief Cuenta los digitos de un numero
 * 
 * @param e Numero a contar digitos
 * @return int El numero de digitos
 */
int cDigitos(int e);

/**
 * @brief Suma los digitos de un numero
 * 
 * @param e Numero a operar
 * @return int Suma de los digitos
 */
int sDigitos(int e);

#endif