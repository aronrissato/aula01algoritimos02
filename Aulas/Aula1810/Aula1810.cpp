// Aula1810.cpp : define o ponto de entrada para o aplicativo do console.
//

/*

Condicionais (if)

quando precisa usar mais de uma validacao:

e-  &&

ou - ||


obs: ctrl + D (copia a linha selecionada na linha de baixo)
obs: ctrl + D (copia a linha selecionada na linha de baixo)
*/

//receba 4 numeros inteiros e retorno o maior numero



#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int Contador()
{
	int numero;

	printf("Informe um numero: \n");
	scanf_s("%i", &numero);

	return numero;
}

int main()
{
	int numero = Contador();
	int maiornumero = 0;
	int i;

	while (i = 1, i <= 4, i++)
	{
		Contador();
		numero;
		if (numero >= maiornumero)
		{
			maiornumero = numero;
		}
	}

	printf("O maior numero eh: %i", maiornumero);

	return 0;
	system("pause");
}


