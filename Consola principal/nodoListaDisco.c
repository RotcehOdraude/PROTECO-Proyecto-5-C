#include <stdlib.h>
#include "nodoListaDisco.h"

Nodo* crearNodo(){
	Nodo* nodo = malloc(sizeof(Nodo));
	return nodo;
}

Nodo* iniciarNodo(Disco dato){
	Nodo* nodo = crearNodo();
	nodo->dato = dato;
	nodo->siguiente = NULL;
	return nodo;
}
