// Aula2510_Repeticoes.cpp : define o ponto de entrada para o aplicativo do console.
//
//Alternativa para xampp
//https://docs.docker.com/get-started/



#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int numero;
int i;
int primeironumero;
int segundonumero;
int terceironumero;
int quartonumero;


void RecebeNumero() {
	i = 0;
	
	while (i<4)
	{
		printf("Digite um numero:\n");
		scanf_s("%i", &numero);
		i++;

		if (i == 1)
		{
			primeironumero = numero;
		}
		if (i == 2)
		{
			segundonumero = numero;
		}
		if (i == 3)
		{
			terceironumero = numero;
		}
		if (i == 4)
		{
			quartonumero = numero;
		}
	}
}


int main()
{
	RecebeNumero();

	if (primeironumero < segundonumero)
	{
		printf("Crescente\n");
	}
	else
	{
		printf("Descrescente\n");
	}
	

	system("pause");
    return 0;
}
