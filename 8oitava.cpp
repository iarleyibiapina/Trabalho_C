#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// 8 Ler um n�mero e imprimir: MAIOR QUE 20; IGUAL A 20;Ou MENOR QUE 20;
// LER UM N�MERO E IMPRIMIR 
main(){
	//VARI�VEIS
	
	int a;
  
    //ENTRADAS
	printf("Digite o numero:");
	scanf("%i", &a);	
	
    //L�GICA
    if (a > 20) 
    printf("\n O numero eh maior 20: %i \n\n", a);
    else
    if (a < 20) 
    printf("\n O numero eh menor 20: %i \n\n", a);
    else
    if ( a = 20)
	printf("\n O numero eh igual 20: %i \n\n", a);
	
	system ("pause");

}
