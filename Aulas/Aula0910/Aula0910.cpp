// Aula0910.cpp : define o ponto de entrada para o aplicativo do console.
//
//\n para pular linha

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h> //adicinadas bibliotecas e falado sobre comentarios no arquivos

//Variaveis globais
int a;	//inteiro
float b; //real
double c; //real

int main()
{

	printf("Oi teste \n");

	//variaveis locais
	char d;
	bool e;


	printf("A\tB\tC\tD\n");
	printf("A\tB\tC\tD\n");
	printf("A\tB\tC\tD\n");
	printf("A\tB\tC\tD\n");

	printf("Mostrando o valor %i \n", 5);

	//inteiro
	printf("A soma de %i e %i eh: %i \n", 4, 10, 4 + 10);

	//real
	printf("Mostrando %.2f, que eh um numero real \n", 4.3);


	int f;
	f = 8;
	a = f * 2;

	printf("Resultado da multiplicacao de %i por %i eh: %i\n\n\n\n\n\n", f, 2, a);




	/* A partir daqui eh com scan meu parca*/
	//zera a variavel ja utilizada pra nao aparecer o valor que ela ja recebeu algum dia na vida
	a = 0;
	printf("Digite uma tecla:\n");
	scanf_s("%c", &a);

	printf("Tecla digitada foi: %c\n", a);

	//parar o DOS enquanto compila
	system("pause");
	return 0;
}
/*para comentarios em blocos colocar asterisco*/
