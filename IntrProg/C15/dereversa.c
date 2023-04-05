/**
 * @file dereversa.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-04-05
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char arr[35];
    int ida = 0;
    printf("Querido usuario, favor de escribir una cadena: ");
    fgets(arr, 35, stdin);
    //gets(arr);
    for (; arr[ida] != '\0'; ida++);
    for (int vuelta = ida - 1; vuelta >= 0; vuelta--)
        putc(arr[vuelta], stdout);

    return 0;
}
