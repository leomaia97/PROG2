#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void function();

int main(){

	char nome1[50];
	char nome2[50];
	int valor1,valor2;

	printf("\nDigite a Primeiro NOME: ");
	gets(nome1);
	printf("\nDigite a Segundo NOME: ");
	gets(nome2);

	printf("\nDigite o Primeiro NUMERO: ");
	scanf("%d",&valor1);
	printf("\nDigite o Segundo NUMERO: ");
	scanf("%d",&valor2);


	function(&nome1,&nome2,&valor1,&valor2);

	return 0;

}

void function(char *n1, char *n2, int *v1, int *v2){

	char troca1[50], troca2[50], aux[100];
	int i, tamanho_nome1=0, tamanho_nome2=0, calculo1=0, calculo2=0;

	tamanho_nome1 = strlen(n1);
	tamanho_nome2 = strlen(n2);

	printf("\nTamanho NOME 1: %d\nTamanho NOME 2: %d",tamanho_nome1,tamanho_nome2);

	calculo1 = tamanho_nome1 + *v1;
	calculo2 = tamanho_nome2 + *v2;

	printf("\n\nValor Inicial 1: %d\nValor Inicial 2: %d",*v1,*v2);

	printf("\nCalculo 1: %d", calculo1);
	printf("\nCalculo 2: %d", calculo2);

	printf("\n\nCONTRARIO NOME 1: ");
	for (i = tamanho_nome2; i >= 0; --i) {
    printf("%c", n2[i]);
	}

	printf("\nCONTRARIO NOME 2: ");
	for (i = tamanho_nome1; i >= 0; --i) {
    printf("%c", n1[i]);
	}


}
