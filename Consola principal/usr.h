//#include "ListaDisco.c"
void consultarDisco(Lista* );
void cargarDiscosEnMemoria(Lista* );
void usr(char* usuario){
  system("clear");
  //printf("Hola desde la funcion usr\n" );
  Lista* list = crearLista();
  cargarDiscosEnMemoria(list);
  int eleccion = 0,salir = 0;
  while (!salir) {
    printf("\t#### BIENVENIDO %s ####\n\n",usuario);
    printf("1) Consultar datos de los discos\n");
    printf("2) Comprar disco\n\n");

    printf("3) Ordenar discos\n");
    printf("4) Buscar discos\n");
    printf("5) Consultar??\n");
    printf("6) Ver mi perfil\n");
    printf("7) Editar mi perfil\n");
    printf("8) Salir\n\t:");
    scanf("%i",&eleccion);

    switch(eleccion){
      case 1:
        system("clear");
        consultarDisco(list);
        break;
      case 2:
        system("clear");
        //removerDisco();
        break;
      case 3:
        system("clear");
        //registrarse();
        break;
      case 4:
        system("clear");
        //iniciarSesion();
        break;
      case 5:
        system("clear");
        //iniciarSesion();
        break;
      case 6:
        system("clear");
        //agregarDisco(list);
        break;
      case 7:
        system("clear");
        //iniciarSesion();
        break;
      case 8:
        system("clear");
        salir = 1;
        break;
      default:
        printf("Opcion invalida\n");
    }
  }
}
void cargarDiscosEnMemoria(Lista* lista){
  //printf("Hola desde la funcion cargarDiscos en memoria\n" );
  char** DISCOS = (char**)malloc(50*sizeof(char**));//Lista
  for (int i = 0; i < 50; i++) {
    DISCOS[i] = (char*)malloc(sizeof(char*));
  }
  int numeroDeLineas = fleerf("Discos.txt","r",DISCOS);
  for (int i = 0; i < numeroDeLineas-1; i++) {
    Disco d;
    strcpy(d.nombre,DISCOS[i]);
    strcpy(d.artista,DISCOS[++i]);//ejemplo post y pre decremento...
    d.precio = atof(DISCOS[++i]);
    d.anio = atoi(DISCOS[++i]);
    insertBack(lista,d);
  }
}
void consultarDisco(Lista* lista){
  Nodo* aux = lista->head;
  for(int i = 0 ; i < lista->num_nodos ; i++){
    printf("Nombre del disco: %s\n",(aux->dato).nombre);
    printf("Artista: %s\n",(aux->dato).artista);
    printf("Precio: %5.2f\n",(aux->dato).precio);
    printf("Anio: %d\n\n", (aux->dato).anio);
    aux = aux->siguiente;
  }
}
