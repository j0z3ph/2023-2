/**
 * @file operaciones.h
 * @author Jose Luis
 * @brief Contiene funciones de operaciones
 * @version 0.1
 * @date 2023-03-27
 * 
 * @copyright GPLv3
 * 
 */

#ifndef __OPERACIONES_H__
#define __OPERACIONES_H__ 1

/**
 * @brief Suma dos numeros
 * 
 * @param a Numero A
 * @param b Numero B
 * @return int Suma
 */
int suma(int a, int b);

/**
 * @brief Suma dos numeros por referencia
 * 
 * @param a Numero A
 * @param b Numero B
 * @return int Suma
 */
int sumaRef(int* a, int* b);

#endif