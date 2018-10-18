#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "registro.h"
#include "inicioSesion.h"

typedef struct usuario{
  char nomUsuario[20];
  char contrasenia[20];
  int numCompras;
  int cantidad;
}Usuario;

int main(int argc, char const *argv[]) {
  int eleccion = 0;
  printf("\t#### CONSOLA PRINCIPAL ####\n\n");
  printf("1) Registrarse\n");
  printf("2) Iniciar sesión\n\t:");
  scanf("%i",&eleccion);
  switch(eleccion){
    case 1:
      system("clear");
      registrarse();
      break;
    case 2:
      system("clear");
      iniciarSesion();
      break;
    default:
      printf("Opcion invalida\n");
  }
  return 0;
}
