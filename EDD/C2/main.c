/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

struct Estructura {
    int entero;
    float flotante;
    double doble;
};

union Union {
    int entero;
    float flotante;
    double doble;
};



int main(int argc, char const *argv[])
{
    struct Estructura est1;
    union Union un1; 

    est1.entero = -666;
    est1.flotante = 3.1416;
    est1.doble = 6.20;

    un1.entero = -666;
    un1.flotante = 3.1416;
    un1.doble = 6.20;

    printf("%i", sizeof(un1));
    return 0;
}
