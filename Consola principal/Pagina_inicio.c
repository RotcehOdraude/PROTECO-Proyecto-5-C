#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "registro.h"
#include "inicioSesion.h"
int main(int argc, char const *argv[]) {
  int eleccion = 0;
  printf("\t#### CONSOLA PRINCIPAL ####\n\n");
  printf("1) Registrarse\n");
  printf("2) Iniciar sesión\n\t:");
  scanf("%i",&eleccion);
  switch(eleccion){
    case 1:
    /*char str[] = "Geeks-for-Geeks";
    // Returns first token
    char *token = strtok(str, "-");
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL){
      printf("%s\n", token);
      token = strtok(NULL, "-");
    }*/
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
