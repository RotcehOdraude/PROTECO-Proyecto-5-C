typedef struct disco{
  char nombre[20];
  char artista[20];
  float precio;
  int anio;
}Disco;
typedef struct Nodo{
    Disco dato;
    struct Nodo* next;
}Nodo;

Nodo* crearNodo();
Nodo* iniciarNodo(Disco dato);
