/**
 * @file agenda.c
 * @author Jose Luis
 * @brief Agenda con memoria dinamica
 * @version 0.1
 * @date 2023-04-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char **nombre;
    nombre = (char *) calloc(sizeof(*nombre), 1);
    *nombre = (char*) calloc(sizeof(char), 50);
    return 0;
}
