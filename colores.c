  /*Crear una función de salida para enumerados
  @version 10/mar/2016
  @author CPA@LSI.UBu */
                          // CABECERAS
  #include<stdio.h>
                          // TIPOS
  enum Colores { NEGRO, ROJO, VERDE, AZUL, BLANCO };
                          // PROTOTIPOS
  void    escribeColor(enum Colores col);
                         //PROGRAMA
 int main() {
   enum Colores col;
   printf("Introduce un número (entre %d y %d) ", NEGRO, BLANCO);
   scanf("%d", &col);
   printf("Has introducido el número %d que corresponde con el ", col);
   escribeColor(col);
   printf("\n");
   return 0;
 }
                         //FUNCIONES
 /*función que escribe un color en palabras
 @param col Entrada/ del valor del color*/
 void escribeColor(enum Colores col) {
   printf("color ");
   switch(col) {
     case NEGRO: printf("negro"); break;
     case ROJO:  printf("rojo");  break;
     case VERDE: printf("verde"); break;
     case AZUL:  printf("azul");  break;
   }
 }
