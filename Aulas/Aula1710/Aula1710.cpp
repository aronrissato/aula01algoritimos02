// TestandoProjeto.cpp : Define o ponto de entrada para a aplicação de console.
//


#include "pch.h"
#include <stdio.h>
#include <stdlib.h>




float ConsultaNota()
{
	printf("Informe sua nota: \n");
	float nota;
	scanf_s("%f", &nota);
	return nota;
}




float main() {

	printf("Digite zero para sair do programa\n");

	float Nota;

	do
	{
		Nota = ConsultaNota();

		if (Nota >= 6)
		{
			printf("Aprovado.\n");
		}
		else
		{
			printf("Reprovado.\n");
		}

	} while (Nota != 0);


	return 0;
	system("pause");

}