// Aula2011_Struct.cpp : http://linguagemc.com.br/redefinicao-de-tipos-com-typedef/
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct Carro
{
	char modelo[10];
	char marca[10];
	int ano;
	char cor[10];
	char placa[7];
};

void LerDadosCarro()
{
	struct Carro meuCarro;

	printf("Digite o modelo: \n");
	fgets(meuCarro.modelo, 10, stdin);
	//gets_s(meuCarro.modelo);

	printf("Digite a marca: \n");
	fgets(meuCarro.marca, 10, stdin);

	printf("Digite o ano: \n");
	scanf_s("%i", &meuCarro.ano);

	gets_s(meuCarro.cor);

	printf("Digite a cor: \n");
	fgets(meuCarro.cor, 10, stdin);

	printf("Digite a placa: \n");
	fgets(meuCarro.placa, 8, stdin);
}

int main()
{
	LerDadosCarro();
	
}

