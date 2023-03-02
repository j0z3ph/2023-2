#include"cola.h"

void init(Cola *c)
{
    c->head = c->tail1 = c->tail2 = NULL;
    c->size = 0;
}

int add1(Cola *c, int valor)
{
    Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
    if(nodo == NULL) return ERROR;
    nodo->valor = valor;
    nodo->prioridad = 1;
    nodo->next = NULL;
    if (c->head == NULL)
    {
        c->head = nodo;
        c->tail1 = nodo;
    }
    else
    {
        if (c->tail1 == NULL)
        {
            nodo->next = c->head;
            c->head = nodo;
            c->tail1 = nodo;
        }
        else
        {
            nodo->next = c->tail1->next;
            c->tail1->next = nodo;
            c->tail1 = nodo;
        }
    }
    c->size++;
    return 0;
}

int add2(Cola *c, int valor) {
    Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
    if(nodo == NULL) return ERROR;
    nodo->valor = valor;
    nodo->prioridad = 2;
    nodo->next = NULL;
    if (c->head == NULL)
    {
        c->head = nodo;
        c->tail2 = nodo;
    } 
    else
    {
        if(c->tail2 == NULL) {
            c->tail1->next = nodo;
            c->tail2 = nodo;
        } else {
            c->tail2->next = nodo;
        c->tail2 = nodo;
        }
        
    }
    c->size++;
    return 0;
}

int add(Cola *c, int val, int prio) {
    if(prio == 1) return add1(c, val);
    else if (prio == 2) return add2(c, val);
    else return ERROR;
}

int peek(Cola* c) {
    int val=0;
    if(c->head == NULL) return ERROR;
    if(c->head == c->tail1) {
        c->head = c->head->next;
        val = c->tail1->valor;
        free(c->tail1);
        c->tail1 = NULL;
    } else if(c->head == c->tail2) {
        c->head = c->head->next;
        val = c->tail2->valor;
        free(c->tail2);
        c->tail2 = NULL;
    } else {
        Nodo *nodo = c->head;
        val = nodo->valor;
        c->head = c->head->next;
        free(nodo);
    }
    return val;

}

void print(Cola *c) {
    Nodo *current = c->head;
    while(current != NULL) {
        printf("%i-%i -> ", current->valor, current->prioridad);
        current = current->next;
    }
    printf("NULL\n");
}
