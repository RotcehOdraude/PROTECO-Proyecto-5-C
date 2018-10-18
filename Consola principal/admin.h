#include "ListaDisco.c"
void agregarDisco(Lista* pntrStack);
void admin(){
  //printf("Hola desde la funcion admin\n" );
  Lista* list = crearLista();
  system("clear");
  int eleccion = 0,salir = 0;
  while (!salir) {
    printf("\t#### CONSOLA ADMINISTRADOR ####\n\n");
    printf("1) Agregar discos\n");
    printf("2) Remover discos\n");
    printf("3) Actualizar datos de discos\n");
    printf("4) Consultar usuario\n");
    printf("5) Buscar algun usuario\n");
    printf("6) Remover usuario\n\n");
    printf("7) Ordenar discos\n");
    printf("8) Buscar discos\n");
    printf("9) Consultar??\n");
    printf("10) Ver mi perfil\n");
    printf("11) Editar mi perfil\n");
    printf("12) Salir\n\t:");
    scanf("%i",&eleccion);

    switch(eleccion){
      case 1:
        system("clear");
        agregarDisco(list);
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
        //registrarse();
        break;
      case 9:
        system("clear");
        //iniciarSesion();
        break;
      case 10:
        system("clear");
        //iniciarSesion();
        break;
      case 11:
        system("clear");
        //iniciarSesion();
        break;
      case 12:

        salir = 1;
        break;
      default:
        printf("Opcion invalida\n");
    }
  }
}
void agregarDisco(Lista* pntrList){
  Disco d;
  printf("Escribe por favor el nombre del disco: ");
  scanf("%s",d.nombre);
  printf("Escribe por favor el artista: ");
  scanf("%s",d.artista);
  printf("Ecribe por favor el precio: ");
  scanf("%f",&d.precio);
  printf("Escribe por favor el anio: ");
  scanf("%i",&d.anio);
  insertBack(pntrList,d);
}
