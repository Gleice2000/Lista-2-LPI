//EXERCICIO 18
#include<stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n,m,x,l,c,cont=0;
	
	printf("Digite o número de linhas(N):\n");
	scanf("%d",&n);
	printf("Digite o número de colunas(M):\n");
	scanf("%d",&m);
	printf("Digite um número(X):\n");
	scanf("%d",&x);
	
	int matriz[n][m];
	
	printf("Digite os valores da matriz:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			if(matriz[l][c]>x){
				cont++;
			}
		}
	}
	
	printf("A matriz digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
	printf("\nExistem %d números maiores que %d.",cont,x);
	
    return 0;
}
