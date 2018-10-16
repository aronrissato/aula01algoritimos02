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

float Divisao(float x, float y)
{
	if (y == 0)
	{
		printf("Nao pode receber zero na divisao, segue demais resultados. \n");
		return 0;
	}

	float res = 0;
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
	float ResultadoDiv = (float)Divisao((float)primeiroNumero, (float)segundoNumero);
	int ResultadoMult = Multiplicacao(primeiroNumero, segundoNumero);
	
	printf("O resultado da soma eh: %i \n", ResultadoSoma);
	printf("O resultado da subtracao eh: %i \n", ResultadoSub);
	
	if (ResultadoDiv != 0)
	{
	printf("O resultado da divisao eh: %.3f \n", ResultadoDiv);
	}

	printf("O resultado da multiplicacao eh: %i \n", ResultadoMult);

	system("pause");
}

