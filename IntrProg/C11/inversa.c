/**
 * @file inversa.c
 * @author Jose Luis
 * @brief Inversa de una matriz
 * @version 0.1
 * @date 2023-03-17
 * 
 * @copyright GPL v3
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef int entero;

typedef enum resultado {
    OK,
    ERROR,
    NOINVERSA
} resultado;

// Declaraciones de funciones


void imprimeF(float matrix[3][3]);
void imprime(int matrix[3][3]);
void traspuesta(int matrix[3][3], int trasp[3][3]);


int determinante(int matrix[3][3]);

void adjunta(int matrix[3][3], int adj[3][3]);


resultado inversa(int matrix[3][3], float inv[3][3]);

int suma(int a, int b);

int main()
{
    int matrix[3][3];
    float inv[3][3];
    resultado res;
    int cont = 1;
    entero ent = 10;
    srand(time(NULL));
    //int res = suma(4,5);
    //printf("%i", res);
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = rand() % 100;
        }
    }

    imprime(matrix);

    res = inversa(matrix, inv);

    if (res == OK) {
        imprimeF(inv);
    } else {
        printf("La matriz no tiene inversa :\"(\n");
    }

    
    
    
    return 0;
}

// Definiciones de funciones


/**
 * @brief Imprime una matriz de 3x3
 * 
 * @param matrix La matriz a imprimir.
 */
void imprime(int matrix[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }
}

/**
 * @brief Imprime una matriz de 3x3
 * 
 * @param matrix La matriz a imprimir.
 */
void imprimeF(float matrix[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }
}


/**
 * @brief Obtiene la traspuesta de una matriz de 3x3
 * 
 * @param matrix La matriz a trasponer
 * @param trasp La matriz traspuesta
 */
void traspuesta(int matrix[3][3], int trasp[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trasp[j][i] = matrix[i][j];
        }
    }
}

/**
 * @brief Suma dos numeros
 * 
 * @param a Primer numero
 * @param b Segundo numero
 * @return int Resultado de la suma
 */
int suma(int a, int b) {
    return a+b;
}

/**
 * @brief Calcula el determinante de una matriz de 3x3
 * 
 * @param matrix La matriz original
 * @return int El determinante
 */
int determinante(int matrix[3][3]) {
    int d;
    d = (matrix[0][0] * matrix[1][1] * matrix[2][2]) +
        (matrix[1][0] * matrix[2][1] * matrix[0][2]) +
        (matrix[2][0] * matrix[0][1] * matrix[1][2]) -
        (matrix[2][0] * matrix[1][1] * matrix[0][2]) -
        (matrix[0][0] * matrix[2][1] * matrix[1][2]) -
        (matrix[1][0] * matrix[0][1] * matrix[2][2]);
    return d;
}

/**
 * @brief Calcula la adjunta de una matriz
 * 
 * @param matrix La matriz original
 * @param adj La matriz adjunta
 */
void adjunta(int matrix[3][3], int adj[3][3]) {
    adj[0][0] = (+1) * ((matrix[1][1]*matrix[2][2]) - (matrix[2][1]*matrix[1][2]));
    adj[0][1] = (-1) * ((matrix[1][0]*matrix[2][2]) - (matrix[2][0]*matrix[1][2]));
    adj[0][2] = (+1) * ((matrix[1][0]*matrix[2][1]) - (matrix[2][0]*matrix[1][1]));
    adj[1][0] = (-1) * ((matrix[0][1]*matrix[2][2]) - (matrix[2][1]*matrix[0][2]));
    adj[1][1] = (+1) * ((matrix[0][0]*matrix[2][2]) - (matrix[2][0]*matrix[0][2]));
    adj[1][2] = (-1) * ((matrix[0][0]*matrix[2][1]) - (matrix[2][0]*matrix[0][1]));
    adj[2][0] = (+1) * ((matrix[0][1]*matrix[1][2]) - (matrix[1][1]*matrix[0][2]));
    adj[2][1] = (-1) * ((matrix[0][0]*matrix[1][2]) - (matrix[1][0]*matrix[0][2]));
    adj[2][2] = (+1) * ((matrix[0][0]*matrix[1][1]) - (matrix[1][0]*matrix[0][1]));
}

/**
 * @brief Calcula la inversa de una matriz
 * 
 * @param matrix La matriz original
 * @param inv La matriz inversa
 * @return resultado OK si todo bien, NOINVERSA en otro caso
 */
resultado inversa(int matrix[3][3], float inv[3][3]) {
    int det = determinante(matrix);
    int tras[3][3], adj[3][3];
    float factor = 0.0;
    if(det == 0) {
        return NOINVERSA;
    } else {
        factor = 1.0 / (float)det;
        traspuesta(matrix,tras);
        adjunta(tras, adj);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                inv[i][j] = factor * (float)adj[i][j];
            }
        }
        return OK;
    }
}
