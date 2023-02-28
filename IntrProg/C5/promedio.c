/**
 * @file promedio.c
 * @author Jose Luis Cruz 
 * @brief Obtiene el promedio de una cantidad de numeros
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright GPLv3
 * 
 */
#include<stdio.h>

int main()
{
    int num = 0;
    int suma = 0;
    int cont = 0;
    float prom = 0.0;
    char resp = 's';
    while(resp == 's' || resp == 'S')
    //for (resp = 's'; resp == 's' || resp == 'S' ;)
    {
        printf("Escriba un numero: ");
        scanf("%d", &num);
        getc(stdin);
        printf("Uno mas?[s/n] ");
        resp = getc(stdin);
        suma += num;
        cont++;
    }
    prom = (float)suma / (float)cont;
    printf("El promedio es: %10.2f\n", prom);
    
    return 0;
}
