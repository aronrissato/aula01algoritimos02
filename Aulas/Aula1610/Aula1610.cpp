// Aula1610.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
//https://www.udemy.com/c-e-c-fundamentos-para-logica-de-programacao/

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


const char *LerNome(){
	char nome[20];

	printf("Escreva seu nome: \n");
	
	gets_s(nome);

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



int main() {

	const char *PrimeiroNome = LerNome();
	//int Idade = LerIdade();
	printf("Boa tarde senhor %s. \n", PrimeiroNome);

	return 0;
}