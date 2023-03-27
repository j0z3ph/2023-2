/**
 * @file operaciones.c
 * @author Jose Luis
 * @brief 
 * @version 0.1
 * @date 2023-03-27
 * 
 * @copyright GPLv3
 * 
 */

// Paso de parametros por valor
int suma(int a, int b) {
    a = 8;
    b = 12;
    return a + b;
}

// Paso de parametros por referencia
int sumaRef(int* a, int* b) {
    *a = 8;
    *b = 12;
    return *a - *b;
}