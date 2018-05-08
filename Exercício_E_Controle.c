#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n, x;
	int i;
	int *vet;
	int cont=0;
	
	scanf("%d %d", &n ,&x);
	
	vet = (int*)malloc(sizeof(int)*n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d", &vet[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		if(vet[i] == x || vet[i] > x)
		{
			cont++;
			for(i=i; i<=n;i++)
			{
				if(vet[i] == x || vet[i] > x)
				{
					
				}
			}
			break;
		}
		else
		{
			cont++;
		}
	}
	printf("%d\n", cont);
}
