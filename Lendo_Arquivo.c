#include <stdio.h>

int main(){
	
	char linha[100], nome[100];
	int qtd_linha;
	FILE *arq;
	
	printf("\nEntre com o nome do arquivo: ");
	gets(nome);
	
	//Abrir arquivo para leitura
	arq = fopen(nome,"r");
	
	if(arq==NULL){
		printf("\nErro ao abrir %s", nome);
		exit(-1);
	}
	else{
		//Lendo arquivo
		while(fgets(linha,100,arq)!=NULL)
		{
			printf("%s", linha);
			qtd_linha++
		}
	}
	
	// Fecha o arquivo
	fclose(arq);
	
	printf("%d",qtd_linha);
	
	return 0;
}
