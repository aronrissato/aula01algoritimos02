// Aula1610.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
//https://www.udemy.com/c-e-c-fundamentos-para-logica-de-programacao/

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


char *LerNome(void){

	printf("Escreva seu nome: \n");
	
	char nome[250];
	scanf_s("%s", &nome);

	return nome;
}

/*
int LerIdade() {

	printf("Informe sua idade: \n");
	int idade;
	scanf_s("%i", &idade);

	return idade;
}
*/



int main(){

	char *PrimeiroNome = LerNome();
	//int Idade = LerIdade();


printf("Boa tarde senhor %s. \n", *PrimeiroNome);

return 0;
system("pause");
}