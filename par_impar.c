/*
Programa:	par_impar.c
Sinopsis:	Nos ofrece un mensaje si es par un número tecleado
		por consola.
		Ejemplo de sentencia alternativa simple
Version:	Marzo 2018 
Autor:		Paco González Moya
*/
#include<stdio.h>

int main() {
	int numero;	//numero a leer
	int valores;	//Valores leidos
	int par;	//Ofrece 1 si numero es par, 0 enc aso contrario
	
	printf("\nTeclea un valor entero: ");
	valores=scanf("%d", &numero);
	valores++;
	
	//Test para saber si el número es par	
	par = numero %2 ==0;
	
	//Decidimos con IF
	if (par==1) {
		printf("\n El número teleado %d es PAR\n", numero);
	}
	else {
		printf("\n El número teleado %d es ImPaR\n", numero);
	}
	
	return 0;
}
