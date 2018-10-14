#include "Pila.c"
void agregarDisco(Pila* pntrStack);
void admin(){
  //printf("Hola desde la funcion admin\n" );
  Pila* stack = crearPila();
  system("clear");
  int eleccion = 0;
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

  scanf("%i",&eleccion);
  switch(eleccion){
    case 1:
      system("clear");
      agregarDisco(stack);
      break;
    case 2:
      system("clear");
      //iniciarSesion();
      break;
    case 3:
      system("clear");
      //registrarse();
      break;
    case 4:
      system("clear");
      //iniciarSesion();
      break;
    default:
      printf("Opcion invalida\n");
  }
}
void agregarDisco(Pila* pntrStack) {
  Disco d;
  printf("Escribe por favor el nombre del disco: ");
  scanf("%s",d.nombre);
  printf("Escribe por favor el artista: ");
  scanf("%s",d.artista);
  printf("Ecribe por favor el precio: ");
  scanf("%f",&d.precio);
  printf("Escribe por favor el anio: ");
  scanf("%i",&d.anio);
  push(pntrStack,d);

  printf("%s %s %f %i\n",d.nombre,d.artista,d.precio,d.anio);
}
