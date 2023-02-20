/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Variables y constantes
 * @version 0.1
 * @date 2023-02-20
 * 
 * @copyright GPL v3
 * 
 */
#include<stdio.h>
#define PI 3.1416
#define AREA (PI * radio * radio)

int main()
{
    float radio = 0.0, area = 0.0;
    printf("Radio: ");
    scanf("%f", &radio);
    area = AREA;
    printf("El area es: %f", area);
    getc(stdin);
    getc(stdin);
    return 0;
}
