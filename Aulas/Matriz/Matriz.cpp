// Matriz.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#define DIML 2
#define DIMC 2




int main()
{
	int i, j;
	int iMatriz1[DIML][DIMC], iMatriz2[DIML][DIMC], iMatrizSoma[DIML][DIMC];

	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; j++) {

			printf("\nMatriz 1 - linha %i coluna %i = ", i, j);
			scanf_s("%i", &iMatriz1[i][j]);
		}
	}

	printf("\nMatriz 1\n");

	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; j++) {

			printf("%i", iMatriz1[i][j]);
		}

		printf("\n");
	}


	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; j++) {

			printf("\nMatriz 2 - Linha %i Coluna %i = ", i, j);
			scanf_s("%i", &iMatriz2[i][j]);

		}
	}

	printf("\nMatriz 2\n");

	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; j++) {

			printf("%i", iMatriz2[i][j]);
		}

		printf("\n");
	}


	printf("\nSomatoria Matrizes\n");

	for (i = 0; i < DIML; i++){
		for (j = 0; j < DIMC; j++) {

			iMatrizSoma[i][j] = iMatriz1[i][j] + iMatriz2[i][j];
		}
	}
	
	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; j++) {

			printf("%i", iMatrizSoma[i][j]);
		}
		
		printf("\n");
	}


	system("pause");
	return 0;
}