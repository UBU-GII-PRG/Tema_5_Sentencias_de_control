/*
Programa:	menu.c
Sinopsis:	Permite mostrar un menú en pantalla y capturar la opción seleccionada
		Ejemplo de sentencia alternativa múltiple
Version:	Marzo 2018 
Autor:		Paco González Moya
*/
#include<stdio.h>

//Devuelve la opción selecconada en el menú
char opcionMenu();

//Realiza lo que sea preciso según la opción tecleada
void hacerMenu (char opcion);

int main () {
	char tecla;	//tecla pulsada por el usuario
	tecla=opcionMenu();
	hacerMenu(tecla);
	return 0;
}


//Permite la selección de una opción por parte del usuario
char opcionMenu() {
	printf("\nMENU DE OPCIONES\n");
	printf("----------------\n");
	
	printf("\n0. Alta de cliente\n");
	printf("\n1. Modificación de datos\n");
	printf("\n2. Consulta de mensajes\n");
	printf("\n3. Salir\n");
	
	return getchar();
}


void hacerMenu (char opcion) {
	switch (opcion) {
	  case '0':	printf("\nHas tecleado -> Alta de cliente\n");
			break;
	  case '1':	printf("\nHas tecleado -> Modificación de datos\n");
			break;
	  case '2':	printf("\nHas tecleado -> Consulta de mensajes\n");
			break;
	  case '3':	printf("\nHas tecleado -> Salir\n");
			break;
	}
	return;
}
