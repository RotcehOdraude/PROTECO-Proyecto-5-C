void admin(){
  //printf("Hola desde la funcion admin\n" );
  system("clear");
  int eleccion = 0;
  printf("\t#### CONSOLA PRINCIPAL ####\n\n");
  printf("1) Agregar discos\n");
  printf("2) Remover discos\n");
  scanf("%i",&eleccion);
  switch(eleccion){
    case 1:
      system("clear");
      //registrarse();
      break;
    case 2:
      system("clear");
      //iniciarSesion();
      break;
    default:
      printf("Opcion invalida\n");
  }
}
