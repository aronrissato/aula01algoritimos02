// Matriz.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#define DIML 2
#define DIMC 2




int main()
{
	int i, j, iMatriz1[DIML][DIMC], iMatriz2[DIML][DIMC];

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
		for (i = 0; i < DIMC; i++) {



		}
	}






	system("pause");
	return 0;
}

