#include "NodoDisco.c"
typedef struct Pila{
  Nodo *tope;
}Pila;
typedef enum boolean{false,true} Bool;

Pila* crearPila();
Bool push(Pila *pila, Disco dato);
Disco* pop(Pila *pila);
Bool isEmpty(Pila *pila);
Disco* tope(Pila *pila);
