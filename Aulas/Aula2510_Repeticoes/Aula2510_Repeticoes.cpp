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
int quintonumero;


void RecebeNumero() {
	i = 0;

	while (i <= 4)
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
		if (i == 5)
		{
			quintonumero = numero;
		}
	}
}


int main()
{
	RecebeNumero();

	if (primeironumero < segundonumero && segundonumero < terceironumero && terceironumero < quartonumero)
	{
		printf("Crescente\n");
	}
	else
	{
		if (primeironumero > segundonumero && segundonumero > terceironumero && terceironumero > quartonumero)
		{
			printf("Descrescente\n");
		}
		else
		{
			printf("Ta no bailao. \n");
		}
	}
	system("pause");
	return 0;
}
