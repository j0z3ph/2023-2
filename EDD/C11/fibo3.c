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
    
    if(n >= 2) {
        int a = 1;
        int b = 1;
        int aux;
        for (int i = 2; i < n; i++)
        {
            aux = a + b;
            a = b;
            b = aux;
        }
        return b;
        
    } else return 1;
}

int main()
{
    printf("%i\n",fibonacci(6));
    return 0;
}
