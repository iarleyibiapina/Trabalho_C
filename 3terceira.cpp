#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<iostream>
#include<string.h>

// 3. Receber do teclado uma mensagem e imprimir quantas 
// letras A, E, I, O, U
// tem esta mensagem. Considerar minúsculas e maiúsculas
int main(){
	
	int loop;
	int tam;
	char frase[30];
	int vogalA = 0; 
	int vogalE = 0;
	int vogalI = 0;
	int vogalO = 0;
	int vogalU = 0;
	
	printf("Digite um nome ou frase.\n");
	gets(frase);
	tam = strlen(frase);
	
	printf("Esta frase ou nome possui: \n");
	for(loop= -2; loop <= tam; loop++)
	// teste em cada caracter se é a vogal ou n.
		{
		if (frase[loop] == 'a' || frase[loop] == 'A')
			vogalA++;
			//nao imprime aqui
			else
		
		if(frase[loop] == 'e' || frase[loop] == 'E')
			vogalE++;

			else
		
		if(frase[loop] == 'i' || frase[loop] == 'I')
			vogalI++;
			
			else
		
		if(frase[loop] == 'o' || frase[loop] == 'O')
			vogalO++;
			
			else
		
		if(frase[loop] == 'u' || frase[loop] == 'U')
			vogalU++;
			
	}
	
//			Exibe contagem de caracteres
			printf("\n%d vogal A ou a.", vogalA);
			printf("\n%d vogal E ou e.", vogalE);
			printf("\n%d vogal I ou i.", vogalI);
			printf("\n%d vogal O ou o.", vogalO);
			printf("\n%d vogal U ou u.", vogalU);
	return(0);
}
