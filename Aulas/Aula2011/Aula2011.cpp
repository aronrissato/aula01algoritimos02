#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


int Recursividade(int numero)
{
	if (numero == 1) {
		return numero;
	}
	else
	{
		return numero + Recursividade(numero - 1);
	}
}

int main()
{
	int numero;


	printf("Informe um numero: \n");
	scanf_s("%i", &numero);

	int Recursividade(int numero);

	printf("Soma: %i", Recursividade(numero));

	return 0;
}