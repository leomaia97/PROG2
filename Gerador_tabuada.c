#include <stdio.h>

int main(){
	
	int i,j, res=0;
	char linha[100];
	FILE *arq;
	
	// Abrir arquivo para gravacao
	arq=fopen("meuarq.txt","w");
		
	if(arq==NULL){
		printf("\nErro ao abrir meuarq");
		exit(-1);
	}
	else{
	printf("Gerando Tabuada...");
	fprintf(arq,"\nTabuada de Adicao");
	fprintf(arq,"\n-----------------");
	
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			fprintf(arq,"\n%d + %d = %d",i,j,i+j);
		}
		fprintf(arq,"\n-----------------");				
	}
	
	}
	// Fecha o arquivo
	fclose(arq);
	
	printf("\nTabuada Gerada com Sucesso!");
	
	return 0;
}
