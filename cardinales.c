/*
Programa:	cardinales.c
Sinopsis:	Nos ofrece el cardinal de un número natural de cero a nueve
		tecleado por consola
		Ejemplo de sentencia alternativa múltiple
Version:	Marzo 2018 
Autor:		Paco González Moya
*/
#include<stdio.h>

//Función de validación
int validaNumero (unsigned int num);

//Función para obtener el cardinal
void cardinalNumero (unsigned int num);

int main() {
	unsigned int numero;


	//Pedimos el número por teclado
	printf("\nTeclea un número natural [0..9]:");
	scanf("%u", &numero);
	if (validaNumero(numero)) {
		cardinalNumero(numero);
	}
	else {
		printf("\nEl número %u no está en el rango [0..9]\n", numero);
	}

	return 0;
}


//Valida si el número leído se encuentra en el rango [0..9]
int validaNumero (unsigned int num) {
	return (num>=0 && num<=9);
}

//Función para obtener el ordinal
void cardinalNumero (unsigned int num) {
	switch (num) {
	  case 0:	printf("\ncero\n");
			break;
	  case 1:	printf("\nuno\n");
			break;
	  case 2:	printf("\ndos\n");
			break;
	  case 3:	printf("\ntres\n");
			break;
	  case 4:	printf("\ncuatro\n");
			break;
	  case 5:	printf("\ncinco\n");
			break;
 	  case 6:	printf("\nseis\n");
			break;
 	  case 7:	printf("\nsiete\n");
			break;
 	  case 8:	printf("\nocho\n");
			break;
 	  case 9:	printf("\nnueve\n");
			break;
	  default:
			printf("\n¿?\n");

	}
	return;
}




