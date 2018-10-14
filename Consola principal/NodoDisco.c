#include <stdlib.h>
#include "NodoDisco.h"

Nodo* crearNodo(){
  Nodo *nodo = malloc(sizeof(Nodo));
  return nodo;
}
Nodo* iniciarNodo(Disco dato){
  Nodo *nodo = crearNodo();
  nodo -> dato = dato;
  nodo -> next = NULL;
  return nodo;
}
