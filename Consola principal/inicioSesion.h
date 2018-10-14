#include "fleerf.h"
#include "admin.h"
void iniciarSesion(){
  //printf("Hola desde la fucnión iniciarSesion\n");
  char** USUARIOS = malloc(50);
  char usuario[20],contrasenia[20];
  char USUARIO[20],CONTRASENIA[20];
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
  for(size_t i = 0; i < numUsuarios; i++){
    strcpy(USUARIO,strtok(USUARIOS[i], "|"));
    strcpy(CONTRASENIA,strtok(NULL, "|"));
    if(strcmp(USUARIO,usuario) == 0){
      printf("Son iguales\n");
      for(size_t i = 0; i < 3; i++){
        printf("Por favor escribe tu contrasenia: ");
        scanf("%s",contrasenia);
        if(strcmp(CONTRASENIA,contrasenia) == 0 && strcmp(USUARIO,"admin") == 0){
          admin();
          break;
        }else{
          printf("Entraste a la consola de usuario \n");
          break;
        }
      }
    }else{
      if(i == numUsuarios){
        printf("Este usuario no existe.\n");
        break;
      }
    }
  }

  /*if(strcmp("admin",usuario) == 0){
    printf("Tu eres el mero mero\n" );
    for (int i = 0; i < 3; i++){
      if(strcmp(f) == 0){

      }
    }
  }*/

  /*for(int i = 0; i < numUsuarios; i++){
    char *token = strtok(USUARIOS[i], "|");
    printf("%s-----%s\n",token,usuario );
  }*/
    free(USUARIOS);
}
