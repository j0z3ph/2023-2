/**
 * @file palabras.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-04-05
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#define T 50

int main(int argc, char const *argv[])
{
    char arr[T];
    int words = 0;
    int cuenta = 1;
    printf("Querido usuario, favor de escribir una cadena: ");
    fgets(arr, T, stdin);

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] != ' ' && arr[i] != '\n')
        {
            if (cuenta)
            {
                words++;
                cuenta = 0;
            }
        }
        else
        {
            cuenta = 1;
        }
    }
    //words = words > 0 ? words + 1 : words;

    printf("Palabras: %i\n", words);

    return 0;
}
