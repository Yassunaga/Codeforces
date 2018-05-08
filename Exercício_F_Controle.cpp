#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int *vetA;
	int *vetB;
	int n;
	int x;
	int j;
	
	scanf("%d %d", &n, &x);
	
	vetA = (int*)malloc(sizeof(int)*n);
	vetB = (int*)malloc(sizeof(int)*n);
	
	int i;
	int result = 0;
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &vetA[i]);
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &vetB[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(vetA[i] + vetB[j] == x)
			{
				result = 1;
			}	
		}
		
	}
	
	printf("%d\n", result);
	
	return 0;
}
