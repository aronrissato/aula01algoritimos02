// Aula0811.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int *x, valor, y;
	valor = 35;
	x = &valor;
	y = *x;

	printf("Endereco da variavel comum valor: %p \n", &valor);
	printf("Endereco do conteudo do ponteiro x: %p \n", x);
	printf("Endereco da variavel do ponteiro x: %p \n", &x);
	printf("Conteudo da variavel apontada por x: %i \n", *x);
	printf("Conteudo da variavel comum y: %i \n", y);
	
	system("pause");
	return 0;

}

