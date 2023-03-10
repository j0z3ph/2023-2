/**
 * @file main2.c
 * @author Jose Luis
 * @brief Mas arreglos
 * @version 0.1
 * @date 2023-03-10
 * 
 * @copyright GPLv3
 * 
 */
#include<stdio.h>
#define MAX 5

int main()
{
    int arrg[MAX];
    int sum = 0;
    float prom = 0.0;
    int i;

    for (int i = 0; i < MAX; i++)
    {
        printf("Proporcione el valor %i: ", i + 1);
        scanf("%i", &arrg[i]);
    }

    for (int i = 0; i < MAX; i++)
    {
        sum = sum + arrg[i];
    }
    prom = (float)sum / (float)MAX;
    
    printf("El promedio es: %10.2f\n", prom);
    
    return 0;
}
