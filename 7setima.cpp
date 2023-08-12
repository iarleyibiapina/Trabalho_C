#include <stdio.h>
#include <stdlib.h>

// Crie um programa para solicitar sal�rio, presta��o. Se a presta��o for maior
//que 20% do sal�rio, imprimir: EMPR�TIMO N�O PODE SER CONCEDIDO.
//Sen�o imprimir EMPR�STIMO PODE SER CONCEDIDO.

int main() {
  float salario, prestacao, percentual;

  printf("Informe o salario: R$ ");
  scanf("%f", &salario);

  printf("Informe o valor da prestacao: R$ ");
  scanf("%f", &prestacao);

  percentual = (prestacao / salario) * 100;

  printf("\nA prestacao corresponde a %.2f%% do salario.", percentual);

  if (percentual > 20.0)
     printf("\nEMPRESTIMO NAO PODE SER CONCEDIDO \n");
  else
     printf("\nEMPRESTIMO PODE SER CONCEDIDO.\n");
     
     system ("pause");
     return 0;
}
