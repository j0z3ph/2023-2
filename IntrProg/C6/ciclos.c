/**
 * @file ciclos.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#define true 1
#define false 0

int main()
{
    int n = 0, cont = 1;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    while(true) {
        if(cont %2 == 0) continue;
        printf("%i x %i = %i\n",n,cont,n*(cont++));
        if(cont >10) break;
        
    }

    
    return 0;
}
