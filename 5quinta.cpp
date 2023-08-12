#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<iostream>
#include<string.h>

//5. Fazer um programa que informe o tempo gasto em uma viagem (em horas),
//a velocidade média e calcule o consumo.

int main(){
	//km
	float distancia;
	//velocidade media 
	float vm;
	//consumo 
	float consumo,consumototal;
	//tempo
	float tempo;
	
	
	printf("Calculando tempo, velocidade media e consumo da viagem.\n");
	printf("Distancia em km: ");
	scanf("%f", &distancia);
	printf("Consumo de km por litro: ");
	scanf("%f", &consumo);
	printf("Velocidade Media da viagem estimada: ");
	scanf("%f", &vm);
	
	
	//Calculo de Consumo.
		consumototal = distancia / consumo;
	//Calculo de tempo.
		tempo = (distancia - 0) / (vm);
		//tempo em horas
			
	printf("\nO tempo necessario para concluir a viagem eh de: %.1f horas \n", tempo);
	printf("O consumo total foi de: %.1f litros.", consumototal);
	
	
	return(0);
}
