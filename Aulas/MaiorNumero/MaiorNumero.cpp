
// MaiorNumero.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


int Contador()
{
	int numero;

	printf("Informe um numero: \n");
	scanf_s("%i", &numero);

	return numero;
}


int MaiorValor(int a, int b, int c, int d) {

	int maior = a;

	if (maior < b)
	{
		maior = b;
	}
	if (maior < c)
	{
		maior = c;
	}
	if (maior < d)
	{
		maior = d;
	}

	return maior;

}

int main() {

	int primeiro = Contador();
	int segundo = Contador();
	int terceiro = Contador();
	int quarto = Contador();

	int m = MaiorValor(primeiro, segundo, terceiro, quarto);

	printf("O maior numero digitado foi: %i\n", m);

	printf("O primeiro valor eh: %i\n", primeiro);
	printf("O segundo valor eh: %i\n", segundo);
	printf("O terceiro valor eh: %i\n", terceiro);
	printf("O quarto valor eh: %i\n", quarto);


	int somatoria;
	float media;

	somatoria = primeiro + segundo + terceiro + quarto;

	media = somatoria / 4;

	printf("A media das notas eh de: %f \n", media);

	
	system("pause");
	return 0;




}