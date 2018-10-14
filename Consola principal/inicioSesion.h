#include"fleerf.h"
void iniciarSesion(){
  printf("Hola desde la fucnión iniciarSesion\n");
  char** USUARIOS = malloc(50);
  char usuario[20],contrasenia[20];
  char* token;
  for (int i = 0; i < 50; i++) {
    USUARIOS[i] = malloc(1);
  }
  int numUsuarios = fleerf("Usuarios.txt","r",USUARIOS);
  /*for (size_t i = 0; i < numUsuarios; i++) {
    printf("%s\n", USUARIOS[i]);
  }*/
  printf("Por favor escribe el nombre de tu usuario: ");
  scanf("%s",usuario);
  printf("Por favor escribe tu contrasenia: ");
  scanf("%s",contrasenia);
  printf("CADENA DE PRUEBA\n");
  for(int i = 0; i < numUsuarios; i++){
    char *token = strtok(USUARIOS[i], "|");
    printf("%s-----%s\n",token,usuario );

  }
    free(USUARIOS);
}
