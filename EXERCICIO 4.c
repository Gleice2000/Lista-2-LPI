//EXERCICIO 4
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
	int tamanho = 0,escolha=0,k, numAleatorio, pares=0;
	float soma=0;
	setlocale(LC_ALL, "Portuguese");
	printf("Qual o tamanho do vetor?\n");
	scanf("%i",&tamanho);
	
	int vetor[tamanho];
	
	printf("\Escolha entre Digitar ou Gerar o vetor:\n(1-Digitar) (2-Gerar)\n");
	
	do{
		if(escolha == 0)
		{
			scanf("%i",&escolha);
		}else if(escolha != 1 && escolha != 2)
		{
			printf("Opção Invalida!\nTente outra vez\n");
			printf("Escolha entre Digitar ou Gerar o vetor:\n(1-Digitar) (2-Gerar)\n");
			scanf("%i",&escolha);
		}
	
	}while(escolha != 1 && escolha != 2);
	
	if(escolha == 1){
		printf("\nDigite os valores do vetor:\n");
		for(k=0;k<tamanho;k++){
			printf("[%d] = ",k);
			scanf("%i",&vetor[k]);
		}
	}else if(escolha == 2)
	{
		printf("\nGerando os valores do vetor.\n");
		for(k=0;k<tamanho;k++){
			numAleatorio = rand() % 10;
			printf("[%d] = %d\n",k,numAleatorio);
			vetor[k] = numAleatorio;
		}
	}
	
	printf("O vetor contém os seguintes valores:\n\n");
	
	for(k=0;k<tamanho;k++){
		printf("[%d] = %d\n",k,vetor[k]);
		if(vetor[k]%2 == 0){
			pares++;
			soma+=vetor[k];
		}
			
	}
	printf("Foi encontrado um total de %d números pares.",pares);
	printf("\nSão eles:\n");
	
	for(k=0;k<tamanho;k++){
		
		if(vetor[k]%2 == 0){
			printf("[%d] = %d\n",k,vetor[k]);
		}	
	}
	printf("A média dos números pares é de %.2f:\n",soma/pares);
		
    return 0;
}
