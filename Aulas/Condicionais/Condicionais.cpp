// Condicionais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Informe um valor: \n");
	
	int a;
	scanf_s("%i", &a);

	if (a < 50)
	{
		printf("a menor q cinquenta.\n");
	}

	if (a > 50)
	{
		printf("a maior q cinquenta.\n");
	}

	if (a == 50)
	{
		printf("acerto mizeravi");
	}

	return 0;
}

