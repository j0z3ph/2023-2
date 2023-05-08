#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10000

void imprime(int arr[N][N]) {
    for (int i = 0; i < N; i++)
    {
        printf("\n[ ");
        for (int j = 0; j < N; j++)
        {
            printf("%i ", arr[i][j]);
        }
        printf("]");
    }
    printf("\n");
}

void mul(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    
    static int A[N][N], B[N][N], C[N][N];

    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    //imprime(A);
    //imprime(B);

    mul(A,B,C);

    //imprime(C);

    

    return 0;
}
