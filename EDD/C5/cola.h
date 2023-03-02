#ifndef __COLA_H__
#define __COLA_H__ 1
#include <stdio.h>
#include <stdlib.h>
#define ERROR -1 

typedef struct Nodo
{
    int valor;
    int prioridad;
    struct Nodo *next;
} Nodo;

typedef struct ColaP
{
    Nodo *head;
    Nodo *tail1;
    Nodo *tail2;
    int size;
} Cola;
/**
 * @brief Inicializa la cola
 * 
 * @param c Cola a inicializar
 */
void init(Cola *c);

int add1(Cola *c, int valor);

int add2(Cola *c, int valor);

int add(Cola *c, int val, int prio);

int peek(Cola* c);

void print(Cola *c);


#endif
