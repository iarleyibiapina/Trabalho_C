#include<math.h>
#include<iostream>
// 5.Fazer um programa que imprima a média aritmética 
// dos números 8, 9 e 7. A média dos números 
// 4, 5, 6. A soma das duas médias. A média das médias. 
 using namespace std;

int main(){
	
//VARIAVEIS	
float media1,media2;
int soma1=0,soma2;
//VETORES
int num1 []={4,5,6};	
int num2 []={7,8,9};


for (int i=0;i < 3;i++)
	{
	soma1=soma1+num1[i];
	soma2=soma2+num2[i];
	}
	
	media1=soma1 / 3.0;
	media2=soma2 / 3.0;
	printf ("\nA MEDIA ENTRE 5,6,4 : (%.2f)\n",media1);
	printf ("A MEDIA ENTRE 7,8,9 : (%.2f)",media2);

	float soma=media1+media2;
	printf("\nSOMA DAS MEDIAS : (%.2f)\n",soma);
	float media=soma/2.0;
	printf	("\nMEDIA DAS MEDIAS %.2f",media);
}
