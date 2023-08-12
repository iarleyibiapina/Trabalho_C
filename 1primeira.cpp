#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<iostream>
#include<string.h>

//1. Receber um nome e imprimir na posição ímpar.


int main(){
		
	char nome[15];
	int loop;
	int conversao;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	conversao = strlen(nome);
		//teste
		//printf("%i\n\n", conversao);

	
	//logica de imprimir o numero de caracteres
	for(loop = 0; loop <= conversao; loop++)
		//logica de imprimir apenas os impares
		if (loop % 2 == 0)
		//quando a palavra é par ele imprime o numero de vezes pares, mas nao exibe o caracter
		printf("\n Caracter: %c",nome[loop]);
	getch();

}
