#include <stdlib.h>
#include "Pila.h"

Pila* crearPila(){
  Pila *pila = malloc(sizeof(Pila));
  pila -> tope = NULL;
  return pila;
}
Bool push(Pila *pila,Disco dato){
  Nodo *nodo = iniciarNodo(dato);
  if(nodo == NULL){
    return false;
  }
  nodo -> next = pila -> tope;
  pila -> tope = nodo;
  return true;
}
Bool isEmpty(Pila *pila){
  if(pila -> tope == NULL){
    return true;
  }
  return false;
}
Disco* pop(Pila *pila){
  if(!isEmpty(pila)){
    Nodo *aux = pila -> tope;
    pila -> tope = pila -> tope -> next;
    aux -> next = NULL;
    return &aux -> dato;
  }
  return NULL;
}
Disco* tope(Pila *pila){
  if(!isEmpty(pila)){
    return &pila -> tope -> dato;
  }
  return NULL;
}
