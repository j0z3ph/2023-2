/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-03
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int n = 0;
    printf("Numero: ");
    scanf("%i", &n);
    for (int i = n - 1; i > 1; i--)
        n = n * i;
    printf("%i\n", n);
    return 0;
}
