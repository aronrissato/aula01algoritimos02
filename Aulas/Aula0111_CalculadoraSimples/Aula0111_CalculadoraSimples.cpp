// Aula0111_CalculadoraSimples.cpp : define o ponto de entrada para o aplicativo do console.
//
//https://www.hackerrank.com/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int Numeros()
{
	printf("Informe um numero: \n");
	
	int numero;
	scanf_s("%i", &numero);
	
	return numero;
}

int Soma(int x, int y)
{
	int res;
	res = x + y;
	return res;
}

int Subtracao(int x, int y)
{
	int res;
	res = x - y;
	return res;
}

int Divisao(int x, int y)
{
	if (y == 0)
	{
		printf("Nao pode receber zero na divisao, segue demais resultados.\n");
		return 0;
	}

	int res;
	res = x / y;
	return res;
}


int Multiplicacao(int x, int y)
{
	int res;
	res = x * y;
	return res;
}

int main()
{
	int primeiroNumero = Numeros();
	int segundoNumero = Numeros();
	int ResultadoSoma = Soma(primeiroNumero, segundoNumero);
	int ResultadoSub = Subtracao(primeiroNumero, segundoNumero);
	int ResultadoDiv = Divisao(primeiroNumero, segundoNumero);
	int ResultadoMult = Multiplicacao(primeiroNumero, segundoNumero);
	
	printf("O resultado da soma eh: %i \n", ResultadoSoma);
	printf("O resultado da subtracao eh: %i \n", ResultadoSub);
	
	if (ResultadoDiv != 0)
	{
	printf("O resultado da divisao eh: %i \n", ResultadoDiv);
	}

	printf("O resultado da multiplicacao eh: %i \n", ResultadoMult);

	system("pause");
}

