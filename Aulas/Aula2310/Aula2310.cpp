// Aula2310.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


float Salario() {
	float valor;

		printf("Informe seu salario atual: \n");
		scanf_s("%f", &valor);

	return valor;
}


int main()
{
	float Valores = Salario();
	float SalarioBruto;

	if (Valores < 1787.78)
	{

		printf("\nSeu salario eh de: %f\n", Valores);

	}


	if (Valores >= 1787.78 && Valores <= 2679.29)
	{
		SalarioBruto = (Valores * 3.5) - 134.08;

		printf("\n\nSeu salario eh de: %2.f\n", SalarioBruto);

	}
	
	if (Valores >= 2679.29 && Valores <= 3572.43)
	{
		SalarioBruto = (Valores * 4.75) - 335.03;

		printf("\nSeu salario eh de: %2.f\n", SalarioBruto);

	}
	
	if (Valores >= 3572.43 && Valores <= 4463.81)
	{
		SalarioBruto = (Valores * 5.23) - 636.13;

		printf("\nSeu salario eh de: %2.f\n", SalarioBruto);

	}
	
	if (Valores >= 4463.81 && Valores <= 7300.20)
	{
		SalarioBruto = (Valores * 6.11) - 1302.03;

		printf("\nSeu salario eh de: %2.f\n", SalarioBruto);

	}
	
	else  
	{
		if (Valores > 7301)
		{
			printf_s("\nSeu salario nao possui desconto de IR. \n");
		}

	}
    return 0;
}

