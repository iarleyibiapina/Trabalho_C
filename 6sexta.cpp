#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<iostream>
#include<string.h>

// 6. Fazer um programa que faça o cálculo de um salário líquido de um
//professor. Serão fornecidos valor da hora aula, número de aulas dadas e o %
//de desconto do INSS

int main(){
	
    float auladada; 
    float horaaula; 
	float desconto;  
    float descontototal;   
	float salariobruto;    
    float salarioliquido;  
 
    printf("Valor da hora aula: "); 
	scanf("%f", &horaaula);
    printf("Aulas dadas: "); 
	scanf("%f", &auladada);
    printf("PERCENTUAL DE DESCONTO: "); 
	scanf("%f", &desconto);
// 	calculo salario bruto
    salariobruto = horaaula * auladada;
//  calculo desconto do inss
    descontototal = (desconto / 100) * salariobruto;
//  salario  liquido
    salarioliquido = salariobruto - descontototal;
 // resultado
    printf("Salario bruto: %.2f\n", salariobruto);
    printf("Desconto do inss: %.2f\n", descontototal);
    printf("Salario liquido: %.2f\n", salarioliquido);
	
	return(0);
}

