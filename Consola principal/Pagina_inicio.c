#include <stdio.h>
#include "registro.h"
int main(int argc, char const *argv[]) {
  int eleccion = 0;
  printf("\t#### CONSOLA PRINCIPAL ####\n\n");
  printf("1) Registrarse\n");
  printf("2) Iniciar sesión\n\t:");
  scanf("%i",&eleccion);
  switch(eleccion){
    case 1:
      registrarse();
      break;
    case 2:
      //iniciarSesion();
      break;
    default:
      printf("Opcion invalida\n");
  }
  return 0;
}
