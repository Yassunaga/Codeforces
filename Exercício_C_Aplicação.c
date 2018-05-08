#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n, m, i, j;
	int linha=0,coluna=0;
	int vet[10][10];

	scanf("%d %d", &n, &m);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d%d", &vet[i][j], &vet[i][j]);
			if(vet[i][j] == 1)
			{
				if(j>coluna)
				{
					coluna = j;		
				}		
				if(i>linha)
				{
					linha = i;
				}
			}		
		}		
	}
	
	printf("%dx%d\n", coluna, linha);
	
	return 0;
}
