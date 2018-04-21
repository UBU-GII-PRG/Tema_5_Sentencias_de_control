/*
Cálculo del MCD por el algoritmo exhaustivo
version estructurada
Enero 2018
Paco González Moya
*/
#include<stdio.h>
int
main ()
{
  int x, y;			//Operandos para el MCD
  int i = 1;			//Contador
  int mcd = i;			//valor del mcd
  printf ("\nCálculo del MCD por el método exhaustivo\n");
  printf ("\tTeclear el primer valor: ");
  scanf ("%i", &x);
  printf ("\tTeclear el segundo valor: ");
  scanf ("%i", &y);

  while (i <= x && i <= y)
    {
      if ((x % i == 0) && (y % i == 0))
	mcd = i;
      i++;
    }
  printf ("\n\tMCD(%i, %i) es %i\n", x, y, mcd);
  return 0;
}
