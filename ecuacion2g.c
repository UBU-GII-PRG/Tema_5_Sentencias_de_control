/*
Programa:	ecuacion2g.c
Sinopsis:	Cálculo de las raices de una ecuación de grado 2
		Se piden los coeficientes a,b y c de un polonomio del tipo
		a*x² + b*x + c = 0
		Emplearemos funciones de math.h
Resultados:	Las raices reales x1 y x2
Autor:		Paco González Moya
Version	:	1.0
Fecha:		marzo de 2018

IMPORTANTE: 	No olvidar ofrecer el argumento de compilacion -lm al final
*/

#include <stdio.h>
#include <math.h>
/** Funciṕn para la lectura de datos
@param	float *a	E/S coeficiente de grado 2
	float *b	E/S coeficiente de grado 1
	float *c	E/S coeficiente de grado 0
@return void */	
void entradaDatos (float *a, float*b, float*c);


/**Función de cálculo de las raices
@param	float a	E/ coeficiente de grado 2
	float b	E/ coeficiente de grado 1
	float c	E/ coeficiente de grado 0
	float *x1	E/S primera raiz
	float *x2	E/S segunda raiz
@return int */	
int calculoRaices (float a, float b, float c, float *x1, float *x2);


/** Funcion de salida de resultados
@param  float x1	E/ primera raiz
	float x2	S/ segunda raiz
@return void */
void salidaDatos (float x1, float x2, int tipo_raices);


int main() {
	float coef_a, coef_b, coef_c;	//Coeficientes del polinomio
	float raiz_1, raiz_2;		//Raices del polinomio
	int tipo_raices	;		//1 si reales, 0 si imaginarias

	//Pedimos los datos
	entradaDatos (&coef_a, &coef_b, &coef_c);

	//cálculos
	tipo_raices=calculoRaices (coef_a, coef_b, coef_c, &raiz_1, &raiz_2);
	
	//mostramos resultados
	salidaDatos (raiz_1, raiz_2, tipo_raices);
	return 0;
}
void entradaDatos (float *a, float *b, float *c) {
	printf("\nEntrada de datos del polinomio\n");
	printf("\tTeclea coeficiente a: ");
	scanf("%f", a);
	printf("\tTeclea coeficiente b: ");
	scanf("%f", b);
	printf("\tTeclea coeficiente c: ");
	scanf("%f", c);

	printf("\n\nValores actuales: a->%f\t b->%f\t c->%f\t", *a, *b, *c);
	printf("\n------------------------------------------------------------\n");
	return;
}



int calculoRaices (float a, float b, float c, float *x1, float *x2) {
	//Aprovecharemos el cambio de tipo para expresar si se trata de soluciones reales o imaginarias
	float discriminante;	//Valor del discriminante
	int reales=1;		//Indicador de soluciones reales

	discriminante = pow(b,2) - 4*a*c;
	
	if (discriminante >=0.0 ) {
		//Soluciones reales
		*x1 = ((-1) * b + sqrt(discriminante))/(2*a);
		*x2 = ((-1) * b - sqrt(discriminante))/(2*a);

	} else {
		//Soluciones imaginarias
		*x1 = ((-1) * b + sqrt((-1)*discriminante))/(2*a);
		*x2 = ((-1) * b - sqrt((-1)*discriminante))/(2*a);
		reales=0;
	}
	return reales;
}



void salidaDatos (float x1, float x2, int tipo) {
	printf("\n\nRESULTADOS --------------------------------------");
	if (tipo==1) {
		printf("\nRaices reales: x1->%f\t x2->%f", x1, x2);
	} else {
		printf("\nRaices complejas: x1->%f*i\t x2->%f*i", x1, x2);
	}
	printf("\n--------------------------------------------------\n");
	return;
}

