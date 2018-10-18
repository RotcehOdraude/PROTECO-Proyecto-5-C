#ifndef COLA_H
#define COLA_H

#include "nodo.c"

typedef struct Cola {
	Nodo* front;
	Nodo* back;
} Cola;

Cola* crearCola();
void queue(Cola* cola, int dato);
Nodo* dequeue(Cola* cola);
Nodo* getFront(Cola* cola);
Nodo* getBack(Cola* cola);
int isEmpty(Cola* cola);
//void empty();
#endif

//0 es igual a falso en C
