// Aula0611.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
	int num[5];

	printf("Informe 5 numeros em sequencia apertando a tecla enter.\n");

	scanf_s("%i", &num[0]);
	scanf_s("%i", &num[1]);
	scanf_s("%i", &num[2]);
	scanf_s("%i", &num[3]);
	scanf_s("%i", &num[4]);

	printf("\n\n%i\n", num[0]);
	printf("%i\n", num[1]);
	printf("%i\n", num[2]);
	printf("%i\n", num[3]);
	printf("%i\n", num[4]);

	system("pause");
	return 0;
}
*/


/* eh pra dar erro mas nao entendi q desgraca e essa. Final corrompe o programa depois de "Tecle enter para continuar"

int main() {

	int i, num[5], num2;

	num2 = 99;


	for (i = 0; i <= 5; i++)
	{
		printf("Digite um numero:\n");
		scanf_s("%i", &num[i]);
	}
	for (i = 0; i <= 5; i++)
	{
		printf("\n%i", num[i]);
	}


	printf("\n%i\n", num2);
	system("pause");
	return 0;
}

*/


/*
int main() {

	int i, iVet[10];

	for (i = 0; i < 10; i++)
	{
		iVet[i] = (i + 1) * 2;
		printf("%d\n", iVet[i]);
	}
	for (i = 0; i < 10; i++)
	{
		iVet[i] = (i + 1) * 2;
		printf("%d\n", iVet[i]);
	}
	for (i = 0; i < 10; i++)
	{
		iVet[i] = (i + 1) * 2;
		printf("%d\n", iVet[i]);
	}

	system("pause");
}
*/


int main() {
	int Digitos[8], i;
	int soma30, somatotal, total30;

	soma30 = 0;
	total30 = 0;
	somatotal = 0;

	printf("Informe 8 numeros:\n");

	for (i = 0; i < 8; i++)
	{
		scanf_s("%i", &Digitos[i]);
	}

	for (i = 0; i < 8; i++)
	{
		printf("Numeros informados: %i\n", Digitos[i]);
	}

	for (i = 0; i < 8; i++)
	{
		somatotal = somatotal + Digitos[i];

		if (Digitos[i] > 30)
		{
			printf("\n Numeros maiores que 30: %i", Digitos[i]);
			total30 = total30 + 1;
			soma30 = soma30 + Digitos[i];
		}
	}

	printf("\nA soma dos numeros maiores que 30 eh de: %i\n", soma30);
	printf("A soma de todos os numeros eh de: %i\n\n", somatotal);


	system("pause");


}



