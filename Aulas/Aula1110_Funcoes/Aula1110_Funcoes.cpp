// Aula1110_Funcoes.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


void HelloWorld()
{
	printf("\nHello World!\n");
}

int Somar2Valores(int x, int y, int w)
{
	int a;
	a = x + y + w;
	return a;
}

int LerNumeroInteiro()
{
	printf("Inf um num inteiro: \n");
	
	int numero;
	scanf_s("%i", &numero);
	return numero;
}



int main()
{
	int primeiroValor = LerNumeroInteiro();
	int segundoValor = LerNumeroInteiro();
	int terceiroValor = LerNumeroInteiro();
	int resultado = Somar2Valores(primeiroValor, segundoValor, terceiroValor);
	
	printf("O resultado da soma dos dois valores informados eh: %i \n", resultado);


	system("pause");
}