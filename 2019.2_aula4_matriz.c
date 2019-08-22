#include <stdio.h>
#define TAM 2
#define TAM1 2  // NUMERO de alunos
#define TAM2 3  // NUMERO de questoes

int main(){
	
	char mat[TAM1][TAM2];
	char gab[TAM2];
	int i,j,cont;
	
	for(i=0;i<TAM1;i++){
		printf("Aluno [%d]\n",i+1);
		for(j=0;j<TAM2;j++){
			printf("Digite a questao %d: ",j+1);
			scanf(" %c",&mat[i][j]);
			
		}
	}


// GABAGUITU
	printf("\n\n\nDigite o gabarito: ");
	for(i=0;i<TAM2;i++){
		printf("\nQuestao %d: ",i+1);
		scanf(" %c",&gab[i]);
	}


// comparar bagarito com notas
	printf("\n\n### RESULTADO ###");

	for(i=0;i<TAM1;i++){
		cont=0;
		for(j=0;j<TAM2;j++){
			if(gab[j]==mat[i][j]){
				cont++;				
			}
		}
		printf("\nO Aluno [%d] tirou: %d",i+1,cont);
	}
	
	return 0;
}
