#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int numero;
int total;

int Recursividade(int numero)
{	

	if (numero == 1) {
		return numero;
	}
	else
	{
		total = numero + Recursividade(numero - 1);
	}

	return total;
}


int main()
{
	int numero;


	printf("Informe um numero: \n");
	scanf_s("%i", &numero);


	int Recursividade(int numero);

	printf("A soma de todos os numeros digitados ate 1 eh de: %i", total);

	return 0;
}