/*
Programa:	anidadas.c
Sinopsis:	Permite obtener el máximo de tres valores tecleados por consola
		Ejemplo de sentencia alternativa anidada
Version:	Marzo 2018 
Autor:		Paco González Moya
*/
#include<stdio.h>

int main() {
	int a,b,c;	//Valores a leer
	int maximo;	//Obtendrá el valor máximo

	printf("\nLectura de tres valores para encontrar el máximo\n");
	printf("-------------------------------------------------\n");

	printf("Teclea el primer valor (a): ");
	scanf("%d", &a);
	
	printf("Teclea el segundo valor (b): ");
	scanf("%d", &b);

	printf("Teclea el tercer valor (c): ");
	scanf("%d", &c);
	
	//Comparamos los dos primeros
	if (a>b) {
		//Cierto: candidao a máximo es "a"
		if (a>c) {
			//Cierto: máximo es "a"
			maximo=a;
		} else {
			//Falso: entonces c>=a>b
			maximo=c;
		}
	} else {
		//Falso: entonces a<=b
		if (b>c) {
			//Cierto: entonces a<=c<b
			maximo = b;
		} else {
			//Aquí ya no hace falta comparar: a<=b<c
			maximo=c;
		}
	}

	//Mostramos el resultado:
	printf("\nEl máximo de %d, %d y %d es %d\n",a,b,c,maximo);

	return 0;
}
