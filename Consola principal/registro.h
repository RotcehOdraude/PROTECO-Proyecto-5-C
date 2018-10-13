#include "fimprimirf.h"
#include <string.h>
void registrarse(){
  char apodo[20],contrasenia[20];
  //printf("Hola desde la fucnión registro\n");
  printf("Escribe por favor tu nombre de usuario: ");
  scanf("%s",apodo);
  printf("Escribe por favor tu contrasenia: ");
  scanf("%s",contrasenia);
  strcat(apodo,"|");
  strcat(apodo,contrasenia);
  fimprimirf(apodo,"Usuarios.txt","a");
}
//falta validar que el usuario ingresado no se repita en el archivo Usuarios.txt
