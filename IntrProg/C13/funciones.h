/**
 * @file funciones.h
 * @author Jose Luis
 * @brief Biblioteca de funciones chidas
 * @version 0.1
 * @date 2023-03-29
 * 
 * @copyright GPLv3
 * 
 */

#ifndef __funciones_h__
#define __funciones_h__ 1
#define ERROR -1

/**
 * @brief Calcula el factorial de un numero
 * 
 * @param n El numero
 * @return int El factorial de n
 */
int factorial(int n);

/**
 * @brief Calcula el factorial de un numero mediante
 * recursion
 * 
 * @param n El numero
 * @return int Factorial de n
 */
int factorialR(int n);

/**
 * @brief Cuenta desde 1 hasta n
 * 
 * @param n Limite superior
 */
void cuentaI(int n);

void cuentaR(int n, int i);

#endif