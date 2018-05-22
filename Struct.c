#include <stdio.h>

typedef struct aluno{
	char nome[100][9];
	float nota[9];
}Aluno;

void ler(Aluno *al){
	printf("\nEntre com o nome do Aluno: ");
	gets(al->nome);
	
	printf("\nEntre com a nota do Aluno: ");
	scanf("%f", &al->nota);
}

void imprime(Aluno al){
	printf("\nNome = %s", al.nome);
	printf("\nNota = %f", al.nota);
}

int main(){
	Aluno aluno_uni;
	
	ler(&aluno_uni);
	
	imprime(aluno_uni);
	
	return 0;
}
