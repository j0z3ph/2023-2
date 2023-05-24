/**
 * @file factorial.c
 * @author Jose Luis
 * @brief Factorial
 * @version 0.1
 * @date 2023-05-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n*factorial(n-1);
}


int main()
{
    printf("%i\n", factorial(4));
    
    return 0;
}
