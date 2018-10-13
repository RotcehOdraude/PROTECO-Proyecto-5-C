#include <string.h>
void fleerf(char nombreDeArchivo[10],char formato[5],char** contenido){
  //printf("Hola desde la funcion fleerf\n" );
  FILE *archivo;
  char caracteres[20];
  int i = 0;
  archivo = fopen(nombreDeArchivo, formato);
  if (archivo != NULL) {
    while(feof(archivo)==0){
      fscanf(archivo, "%s", caracteres);
      strcpy(contenido[i], caracteres);
      i++;
    }
    strcpy(contenido[i-1],"");
    fclose(archivo);
  }else{
    printf("El archivo no existe.\n");
  }
}
