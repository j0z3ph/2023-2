run: main
	./main

main: main.c operaciones.o
	gcc main.c operaciones.o -o main 

operaciones.o: operaciones.c
	gcc -g -O -c operaciones.c 