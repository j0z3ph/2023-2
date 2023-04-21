/**
 * @file matrices.c
 * @author Jose Luis
 * @brief Ejemplo de punteros y matrices
 * @version 0.1
 * @date 2023-04-21
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int m[2][2];
    int *ptr = *m;
    for (int a = 0; a < 4; a++)
    {
        *(ptr + a) = a;
    }

    for (int a = 0; a < 4; a++)
    {
        if (a == 2)
            printf("\n");
        printf("%d ", *(ptr + a));
    }

    *(*(m + 1) + 1) = 4;
    *(*(m) + 1) = 10;
    *(*(m + 1)) = 5;
    *(*m) = -5;
    printf("\n");
    for (int a = 0; a < 4; a++)
    {
        if (a == 2)
            printf("\n");
        printf("%d ", *(ptr + a));
    }
    return 0;
}
