// Aula1110_Funcoes.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


void HelloWorld()
{
	printf("\nHello World!\n");
}

int Somar2Valores(int x, int y)
{
	int c;
	c = x + y;
	return c;
}

int main()
{
	HelloWorld();
	
	int a = Somar2Valores(55, 44);
	printf("Resultado da soma: %i\n", a);


	system("pause");
}
