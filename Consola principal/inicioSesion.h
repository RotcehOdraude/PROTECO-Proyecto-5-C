#include "fleerf.h"
#include "admin.h"
#include "usr.h"

void iniciarSesion(){
  //printf("Hola desde la fucnión iniciarSesion\n");
  char** USUARIOS = (char**)malloc(50*sizeof(char**));//Lista
  char usuario[20],contrasenia[20];
  char USUARIO[20],CONTRASENIA[20];
  char* token;
  for (int i = 0; i < 50; i++) {
    USUARIOS[i] = (char*)malloc(sizeof(char*));
  }
  int numUsuarios = fleerf("Usuarios.txt","r",USUARIOS);
  if(numUsuarios != -1){
    printf("Por favor escribe el nombre de tu usuario: ");
    scanf("%s",usuario);
    for(size_t i = 0; i < numUsuarios; i++){
      strcpy(USUARIO,strtok(USUARIOS[i], "|"));
      strcpy(CONTRASENIA,strtok(NULL, "|"));
      if(strcmp(USUARIO,usuario) == 0){
        //printf("Son iguales\n");
        for(size_t i = 0; i < 3; i++){
          printf("Por favor escribe tu contrasenia: ");
          scanf("%s",contrasenia);
          if(strcmp(CONTRASENIA,contrasenia) == 0 && strcmp(USUARIO,"admin") == 0){
            admin();
            break;
          }else if(strcmp(CONTRASENIA,contrasenia) == 0){
            printf("Entraste a la consola de usuario \n");
            usr(usuario);
            break;
          }
        }
      }else{
        if((i+1) == numUsuarios){
          printf("Este usuario no existe...¡¡Registralo porfavor!!\n");
          break;
        }
      }
    }
  }
    free(USUARIOS);
}
