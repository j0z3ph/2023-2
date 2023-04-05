/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main()
{
    char arr[100];
    int i = 0;

    fgets(arr, 100, stdin);

    arr[4] = '\0';
    printf("%s", arr);
    
    while (arr[i] != '\0') {
        putc(arr[i], stdout);
        i++;
    }
    

    return 0;
}
