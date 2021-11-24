//EXERCICIO 6
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
	int tamanho = 0,k, numeroAleatorio, numero,totalB=0;
	float soma=0;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual o tamanho do vetor?\n");
	scanf("%i",&tamanho);
	printf("Qual número voce deseja procurar no vetor?\n");
	scanf("%d",&numero);
	
	int vetor[tamanho],vetorB[tamanho],vetorPosicao[tamanho];
	
	printf("Gerando os valores do vetor.\n\n");
	for(k=0;k<tamanho;k++){
		numeroAleatorio = rand() % 10;
		printf("[%d] = %d\n",k,numeroAleatorio);
		vetor[k] = numeroAleatorio;
	}
	
	printf("O vetor contém os seguintes valores:\n\n");
	
	for(k=0;k<tamanho;k++){
		printf("[%d] = %d\n",k,vetor[k]);
		
		if(vetor[k]==numero)
		{
			vetorB[totalB] = vetor[k];
			vetorPosicao[totalB]=k;
			totalB++;
		}
		
	}
	
	if(totalB == 1)
	{
		printf("\nFoi encontrado %d número %d, ele estava na seguinte posição:\n",totalB,numero);
	}
	else
	{
		printf("\nForam encontrados %d números %d, eles estavam nas seguintes posições:\n",totalB,numero);
	}
	
	for(k=0;k<totalB;k++){
		printf("[%d] = %d\n",vetorPosicao[k],vetorB[k]);
	}
    return 0;
}
