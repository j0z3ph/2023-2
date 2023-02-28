/**
 * @file main.c
 * @author Jose Luis Cruz
 * @brief 
 * @version 0.1
 * @date 2023-02-28
 * 
 * @copyright GPLv3
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#define ERROR INT32_MIN
#define OK 0
#define TRUE 1
#define FALSE 0

typedef struct Nodo {
    int val;
    struct Nodo *next;
} Nodo;

typedef struct Pila {
    Nodo *head;
    int tamanio;
} Pila;

void inicializa(Pila *p) {
    p->head = NULL;
    p->tamanio = 0;
}

int push(Pila *p, int val) {
    Nodo *nodo = (Nodo*)malloc(sizeof(Nodo));
    if(nodo == NULL) return ERROR;
    nodo->val = val;
    nodo->next = p->head;
    p->head = nodo;
    p->tamanio++;
    return OK;
}

int pop(Pila *p) {
    int val = 0;
    Nodo *top = p->head;
    if(p->head == NULL) return ERROR;
    val = p->head->val;
    p->head = p->head->next;
    free(top);
    p->tamanio--;
    return val;
}

int tamanio(Pila *p) {
    return p->tamanio;
}

int vacia(Pila *p) {
    if(p->head == NULL) return TRUE;
    else return FALSE;
}

int top(Pila *p) {
    if(p->head == NULL) return ERROR;
    else return p->head->val;
}

void imprime(Pila *p) {
    Nodo *current = p->head;
    while(current != NULL) {
        printf("%i -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    Pila *pila = (Pila*)malloc(sizeof(Pila));
    char res = 's';
    int val = 0;
    inicializa(pila);
    while(res == 's') {
        printf("Numero: ");
        scanf("%i", &val);
        getc(stdin);
        push(pila, val);
        printf("Agregar otro?[s/n] ");
        res = getc(stdin);
    }
    imprime(pila);
    res = 's';
    while(res == 's') {
        val = pop(pila);
        if(val == ERROR) {
            printf("La lista esta vacia.\n");
            break;
        }
        printf("El valor obtenido es: %i\n", val);
        printf("Sacar otro?[s/n] ");
        getc(stdin);
        res = getc(stdin);
    }
    imprime(pila);
    if(top(pila) == ERROR) printf("La pila esta vacia.\n");
    else printf("El top es: %i\n", top(pila));
    imprime(pila);


    return 0;
}
