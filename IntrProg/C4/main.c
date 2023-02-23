/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Numeros pares e impares
 * @version 0.1
 * @date 2023-02-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main()
{
    int numero = 0;
    printf("Usuario, proporcione un entero: ");
    scanf("%i", &numero);

    printf("El numero es %s", (numero&1) == 0 ? "PAR" : "IMPAR");
    return 0;
}
