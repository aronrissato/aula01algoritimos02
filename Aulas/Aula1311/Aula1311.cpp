#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void troca(float *trocaA, float *trocaB) {
	
	int aux;

	aux = *trocaB;
	*trocaB = *trocaA;
	*trocaA = aux;

	printf("%f, %f", *trocaA, *trocaB);
}


int main()
{
	float *trocaA, *trocaB;
	float a, b;

	printf("Informe o valor de a:\n");
	scanf_s("%f", &a);
	
	printf("Informe o valor de b:\n");
	scanf_s("%f", &b);
	
	trocaA = &a;
	trocaB = &b;

	void troca(float trocaA, float trocaB);

	return 0;
}

