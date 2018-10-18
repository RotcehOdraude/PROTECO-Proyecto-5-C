#ifndef NODO_H
#define NODO_H

typedef struct Nodo {
	int dato;
	struct Nodo* siguiente;
}Nodo;

Nodo* crearNodo();
Nodo* iniciarNodo(int dato);

#endif
