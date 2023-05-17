/**
 * @file uniones.c
 * @author Jose Luis
 * @brief Ejemplo de Uniones
 * @version 0.1
 * @date 2023-05-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

struct Estructura
{
    int i;
    float f;
    double d;
    char c;
};

union Union
{
    int i;
    float f;
    double d;
    char c;
};

typedef struct Estructura Estructura;

typedef union Union Union;


int main()
{
    Estructura var;
    Union var2;

    var.i = 10;
    var2.i = 10;
    printf("Tamanio E: %lu\nTamanio U: %lu\nE.i: %i\nU.i: %i\n", 
    sizeof(var),sizeof(var2),var.i,var2.i);
    var.f = 5;
    var2.f = 5;
    printf("Tamanio E: %lu\nTamanio U: %lu\nE.i: %i\nU.i: %i\n", 
    sizeof(var),sizeof(var2),var.i,var2.i);
    
    return 0;
}
