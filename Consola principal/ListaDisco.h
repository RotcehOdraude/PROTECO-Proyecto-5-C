#ifndef LISTA_H
#define LISTA_H

#include "nodoListaDisco.c"

typedef struct Lista{
  Nodo* head;
  Nodo* tail;
  int num_nodos;
}Lista;

Lista* crearLista();
void insertFront(Lista* lista,Disco dato);
void insertBack(Lista* lista, Disco dato);
void insertAt(Lista* lista, int pos, Disco dato);
Disco* removeFront(Lista* lista);
Disco* removeBack(Lista* lista);
Disco* removeFrom(Lista* lista,int pos);
int isEmpty(Lista* lista);
Disco* getFrom(Lista* lista, int pos);

//getFront
//getBack
//empty

#endif
