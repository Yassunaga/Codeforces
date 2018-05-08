#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i;
    int n;
    int *num;
    int *dif;
    int result;

    scanf("%d", &n);
    num = (int*)malloc(sizeof(int)*n);
    dif = (int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
	{
		scanf("%d", &num[i]);
	}
	
	for(i=0;i<n-1;++i)
	{
		dif[i] = (num[i] - num[i+1]);	
		if(dif[i] < 0)
		{
			dif[i] = dif[i]*(-1);
		}
	}
	
	result = dif[0];
    for(i=0;i<n-2;i++)
    {
		if(result < dif[i+1])
        {
		    result = dif[i+1];
        }
	}
    printf("%d\n", result);
}
