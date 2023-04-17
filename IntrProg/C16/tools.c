/**
 * @file tools.c
 * @author Jose Luis Cruz (j0z3ph@gmail.com)
 * @brief Tools to make interactive menus.
 * @version 0.1
 * @date 2022-11-30
 */

#include<stdio.h>
#include<stdlib.h>
#ifdef _WIN32
#include<windows.h>
#include<conio.h>
#define UP 80
#define DOWN 72
#else
#define UP 66
#define DOWN 65
#endif
#define ENTER 13

/**
 * @brief Moves cursor to desired coordinates.
 * 
 * @param x X coordinate (column)
 * @param y Y coordinate (row)
 */
void gotoXY(int x, int y) {
    #ifdef _WIN32
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x - 1;  
    dwPos.Y= y - 1;  
    SetConsoleCursorPosition(hcon,dwPos); 
    #else
    printf("%c[%d;%df", 0x1B, y, x);
    #endif
}

/**
 * @brief Clears command window
 * 
 */
void clear() {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

/**
 * @brief Prints the given menu. 
 * User can interact with menu using Up/Down arrows
 * and can select an option pressing the ENTER key.
 * 
 * @param numItems Number of items in the string array.
 * @param items String array. Each item is a menu option.
 * @param title Menu title
 * @return int 0-base index of the selected item.
 */
int showMenu(int numItems, char* items[], char const *title) {
    int opt = -1, mark = 0;
    char c;
    clear();
    // Title
    printf("%s\n", title);
    // Items
    for (int i = 0; i < numItems; i++)
    {
        printf(" %s %i. %s\n", mark == i ? ">>" : "  ", i+1, items[i]);
    }
    printf("Seleccione una opcion");
    #ifndef _WIN32
    system("stty raw");
    #endif
    while (opt == -1) {
        #ifdef _WIN32
        c = getch();
        if(c == 0) {
            c = getch();
        }
        #else
        c = getc(stdin);
        #endif
        if(c == ENTER) {
            // Enter
            opt = mark;
        }
        if(c == UP) {
            // Up arrow
            gotoXY(2, mark + 2);
            printf("  ");
            mark = (mark + 1) < numItems ? mark + 1 : 0;
            gotoXY(2, mark + 2);
            printf(">>");
            gotoXY(22, numItems + 2);
        }
        if(c == DOWN) {
            // Down arrow
            gotoXY(2, mark + 2);
            printf("  ");
            mark = (mark - 1) >= 0 ? mark - 1 : numItems - 1;
            gotoXY(2, mark + 2);
            printf(">>");
            gotoXY(22, numItems + 2);
        }
        
    }
    #ifndef _WIN32
    system("stty cooked");
    #endif
    clear();
    return opt;
}
