/* PROGRAMA - DETERMINANTE DE UNA MATRIZ */
#include <stdlib.h>
#include <stdio.h>
#define TAM 2 // definimos una constante, para el tamaño de nuestra
main()
{
int i, j; // contadores para los ciclos (externo y anidado)
float det;
float A[TAM][TAM]; // matriz de tamaño 2 (segun definicion de constante)
printf("****************\n");
printf("* DETERMINANTE *\n");
printf("****************\n");
printf("* Determinante de una matriz A de 2x2 *\n");
	for(i=0; i<TAM; i++) // bucle externo. nos servira para las columnas de la matriz bidimensional
		for(j=0; j<TAM; j++){ // bucle anidado. nos servira para las filas de la matriz bidimensional
			printf("\nProporciona el elemento A[%d][%d]: ", i,j); // menaje pidiendo datos para la matriz
			scanf("%f", &A[i][j]); // escaneo y asigno valor al primer elemento de la matriz, la siguiente vuelta sera al alemento 2 (indice 1)
		}
det = A[0][0]*A[1][1] - A[0][1]*A[1][0]; // operación. calculo la determinante
printf("\nA: \n\t");
	for(i=0; i<TAM; i++){ // ciclo para imprimir la matriz
		for(j=0; j<TAM; j++) 
		printf("%8.2f", A[i][j]);
		printf("\n\t");
	}
printf("\n\n\t\tDeterminante = %.2f\n\n", det); // impresion del resultado de la operacion
system("pause"); // pausa, para que el programa no se cierra sin leer el mensaje final (resultado)
}
