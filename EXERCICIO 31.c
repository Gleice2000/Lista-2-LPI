//EXERCICIO 31

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n=0,m=0,l,c,e;
  
	printf("Digite o número de linhas(N):\n");
	scanf("%d",&n);
  printf("Digite o número de colunas(M):\n");
  scanf("%d",&m);
  printf("Digite o que vai multiplicar a matriz:\n");
  scanf("%d",&e);

	int matriz[n][m];
	
	printf("Digite os valores da matriz:\n\n");
	
	for(l=0;l<n;l++)
	{
		for(c=0;c<m;c++)
		{
			printf("\nmatriz1[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			
		}
	}
	printf("A matriz digitada foi:\n\n");
	for(l=0;l<n;l++)
	{
		for(c=0;c<m;c++)
		{
			printf("%d  ",matriz[l][c]);
		}
	}

  printf("\nA matriz multiplicada é \n\n");
	for(l=0;l<n;l++)
	{
		for(c=0;c<m;c++)
		{
      printf("%d ",matriz[l][c]*e);
		}
	}
    return 0;
}
