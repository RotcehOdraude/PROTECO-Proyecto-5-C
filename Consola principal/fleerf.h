
int fleerf(char nombreDeArchivo[30],char formato[5],char** contenido){
  printf("Hola desde la funcion fleerf\n" );
  FILE *archivo;
  char caracteres[20];
  int i = 0;
  //printf("%s---%s\n",nombreDeArchivo,formato );
  archivo = fopen(nombreDeArchivo, formato);
  if (archivo != NULL) {
    while(feof(archivo)==0){
      fscanf(archivo, "%s", caracteres);
      //printf("%s\n",caracteres);
      strcpy(contenido[i], caracteres);
      i++;
    }

    strcpy(contenido[i-1],"");
    fclose(archivo);
    return i-1;
  }else{
    printf("El archivo no existe.\n");
  }
}
