#include"fleerf.h"
void iniciarSesion(){
  //printf("Hola desde la fucnión iniciarSesion\n");
  char** USUARIOS = malloc(50);
  char usuario[20],contrasenia[20];
  for (size_t i = 0; i < 50; i++) {
    USUARIOS[i] = malloc(1);
  }
  fleerf("Usuarios.txt","r",USUARIOS);
  /*for (size_t i = 0; i < 4; i++) {
    printf("%s\n", USUARIOS[i]);
  }*/
  printf("Por favor escribe el nombre de tu usuario: ");
  scanf("%s",usuario);
  printf("Por favor escribe tu contrasenia: ");
  scanf("%s",contrasenia);
  free(USUARIOS);
}
