void fimprimirf(char buffer[2204],char nombreDeArchivo[10],char formato[5]){
  //printf("Hola desde la funcion fprinf\n");
  FILE *archivo;
  archivo = fopen(nombreDeArchivo, formato);
  if (archivo != NULL) {
    fprintf(archivo, "\n%s", buffer);
    fclose(archivo);
  } else {
    printf("El archivo no existe o no se tiene permisos de lectura /escritura.\n");
  }
}