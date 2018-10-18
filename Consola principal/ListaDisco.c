#include<stdlib.h>
#include "ListaDisco.h"

Lista* crearLista(){
  Lista* lista = malloc(sizeof(Lista));
  lista->head = lista->tail = NULL;
  lista->num_nodos = 0;
  return lista;
}

void insertFront(Lista* lista,Disco dato){
  Nodo* nodo = iniciarNodo(dato);
  if(isEmpty(lista)){
    lista->head = lista->tail = nodo;
  }
  else{
    nodo->siguiente = lista->head;
    lista->head = nodo;
  }
  lista->num_nodos++;
}
void insertBack(Lista* lista, Disco dato){
  Nodo* nodo = iniciarNodo(dato);
  if(isEmpty(lista)) {
    lista->head = nodo;
  }
  else{
    lista->tail->siguiente = nodo;
  }
  lista->tail = nodo;
  lista->num_nodos++;
}
void insertAt(Lista* lista, int pos, Disco dato){
  if(pos > lista->num_nodos){

  }else if(pos == 0){
    insertFront(lista,dato);
  }else if(pos == lista->num_nodos-1){
    insertBack(lista,dato);
  }else{
    Nodo* nodo = iniciarNodo(dato);
    Nodo* aux = lista->head;
    for (int i = 0; i < pos-1; i++) {
      aux = aux->siguiente;
    }
    nodo->siguiente = aux->siguiente;
    aux->siguiente = nodo;
    lista->num_nodos++;
  }
}
Disco* removeFront(Lista* lista){
  if(isEmpty(lista)){
		return NULL;
	}
	Nodo* aux = lista->head;
	if(lista->head == lista->tail){
		lista->head = lista->tail = NULL;
	}
	else if(!isEmpty(lista)){
		lista->head = lista->head->siguiente;
		aux->siguiente = NULL;
	}
  lista->num_nodos--;
	return &aux->dato;
}
Disco* removeBack(Lista* lista){
  Nodo* aux;
  if(isEmpty(lista)){
    return NULL;
  }
  else if(!isEmpty(lista)){
    Nodo* scout = lista->head;
    while (scout->siguiente != lista->tail) {
      scout = scout->siguiente;
    }
    aux = lista->tail;
    scout->siguiente = NULL;
    lista->tail = scout;
  }
  lista->num_nodos--;
  return &aux->dato;
}
Disco* removeFrom(Lista* lista, int pos){
  if(pos > lista->num_nodos){
    return NULL;
  }if(pos == 0){
    return removeFront(lista);
  }else if(pos == lista->num_nodos-1){
    return removeBack(lista);
  }else{
    Nodo* aux;
    Nodo* scout = lista->head;
    for (int i = 0; i < pos; i++) {
      scout = scout->siguiente;
    }
    aux = scout -> siguiente;
    scout->siguiente = aux->siguiente;
    aux->siguiente = NULL;
    lista->num_nodos--;
    return &aux->dato;
  }
}
int isEmpty(Lista* lista){
  if(lista->head == NULL && lista->tail == NULL){
    return 1;
  }
  return 0;
}
Disco* getFrom(Lista* lista, int pos){
  if(pos > lista->num_nodos){
    return NULL;
  }
  Nodo* aux = lista->head;
  for (int i = 0; i < pos; i++) {
    aux = aux->siguiente;
  }
  return &aux->dato;
}
