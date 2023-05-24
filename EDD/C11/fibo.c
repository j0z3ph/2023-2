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
    if(n == 1 || n == 2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    printf("%i\n",fibonacci(6));
    return 0;
}
