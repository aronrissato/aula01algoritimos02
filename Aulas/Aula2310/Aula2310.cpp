// Aula2310.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


float Salario() {
	float valor;

		printf("Informe seu salario atual: \n");
		scanf("%f", &valor);

	return valor;
}


int main()
{
	float Valores = Salario();
	float SalarioBruto;

	if (Valores >= 1787.78 && Valores <= 2679.29)
	{
		SalarioBruto = (Valores * 7.5) - 134.08;

		printf("Seu salario eh de: %f", SalarioBruto);

	}
	
	if (Valores >= 2679.29 && Valores <= 3572.43)
	{
		SalarioBruto = (Valores * 15) - 335.03;

		printf("Seu salario eh de: %f", SalarioBruto);

	}
	
	if (Valores >= 3572.43 && Valores <= 4463.81)
	{
		SalarioBruto = (Valores * 15) - 335.03;

		printf("Seu salario eh de: %f", SalarioBruto);

	}
	
	if (Valores >= 2679.29 && Valores <= 3572.43)
	{
		SalarioBruto = (Valores * 15) - 335.03;

		printf("Seu salario eh de: %f", SalarioBruto);

	}




    return 0;
}

