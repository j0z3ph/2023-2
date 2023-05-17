/**
 * @file main2.c
 * @author Jose Luis
 * @brief Ejemplo de Estructuras 2
 * @version 0.1
 * @date 2023-05-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

struct Resultado
{
    int sum;
    int res;
    int mul;
    float div;
};

struct Datos
{
    int x;
    int y;
};


typedef struct Resultado Resultado;

Resultado basicas(struct Datos d) {
    Resultado var;
    var.sum = d.x + d.y;
    var.res = d.x-d.y;
    var.mul = d.x*d.y;
    var.div = d.y == 0 ? 0.0 : d.x/d.y;
    return var;
}

int main()
{
    struct Datos dato;
    printf("Proporcione x: ");
    scanf("%i", &dato.x);
    printf("Proporcione y: ");
    scanf("%i", &dato.y);
    Resultado res = basicas(dato);
    printf("Suma: %i\nResta: %i\nMultiplicacion: %i\nDivision: %f\n",
     res.sum, res.res, res.mul, res.div);
    return 0;
}
