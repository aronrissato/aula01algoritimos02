// Aula0410.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Hello world!\n");

	printf("Digite uma letra: \n");
		
	char letra;
	scanf_s("%c", &letra);

	printf("A letra que digitou foi: %c\n", letra);

	system("pause");
	return 0;
}

