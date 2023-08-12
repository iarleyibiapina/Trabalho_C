#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<iostream>
#include<sstream>
#include<string.h>

//2. Receber do teclado um nome e imprimir tantas vezes forem seus caracteres.

int main(){

	char nome[20];
	int caracter;
	int loop;

	printf("Digite seu nome: ");
	gets(nome);

	caracter = strlen(nome);

	printf("\n Seu nome e: ");
	//logica de repetiçao
	//começando em o, termina ate chegar no caracter maximo, aumenta de um em um.
	for (loop = 0; loop < caracter; loop++)
//		% S vai imprimir em string.
		printf("\n %s",nome);
		printf(" ");
	
	getch();
	return(0);
}
