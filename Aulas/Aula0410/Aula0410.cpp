// Aula0410.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>

int main()
{
	printf("Hello world!\n");

	printf("Digite uma letra: \n");

	bool laco = true;
	int i = 0;
	char nome[4];

	while (laco)
	{
		char letra;
		scanf_s("%c", &letra);
		if (letra != NULL)
		{
			nome[i] = letra;
			i++;

			laco = (i <= 4);
			/*nois
			if (i>4)
			{
				laco = false;
			} */
		}
	}
	puts(nome);
	//printf(nome);


	system("pause");
	return 0;
}

