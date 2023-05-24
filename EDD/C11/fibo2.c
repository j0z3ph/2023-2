/**
 * @file fibo.c
 * @author Jose Luis
 * @brief Fibonacci
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int fibonacci(int n) {
    int arrg[n];
    if(n >= 2) {
        arrg[0] = 1;
        arrg[1] = 1;
        for (int i = 2; i < n; i++)
        {
            arrg[i] = arrg[i-1]+arrg[i-2];
        }
        return arrg[n-1];
        
    } else return 1;
}

int main()
{
    printf("%i\n",fibonacci(6));
    return 0;
}
