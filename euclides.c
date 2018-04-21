/*
Cálculo del MCD por el algoritmo de Euclides 
version estructurada
Enero 2018 Paco González Moya
*/
#include<stdio.h>
int
main ()
{
  int x, y;			//Operandos para el MCD
  int i = 1;			//Contador
  int resto;			//resto de la division entera
  int mcd;			//valor del mcd;        

  printf ("\nCálculo del MCD por el método exhaustivo\n");
  printf ("\tTeclear el primer valor: ");
  scanf ("%i", &x);
  printf ("\tTeclear el segundo valor: ");
  scanf ("%i", &y);

  resto = x % y;
  if (resto == 0)
    mcd = y;

  else
    {
      do
	{
	  x = y;
	  y = resto;
	  resto = x % y;
	}
      while (resto != 0);
      mcd = y;
    }
  printf ("\n\tMCD(%i, %i) es %i\n", x, y, mcd);
  return 0;
}
