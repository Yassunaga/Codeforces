#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i;
    int n;
    int *num;
    int result;

    scanf("%d", &n);
    num = (int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
	{
		scanf("%d", &num[i]);
	}

	result = num[0];
    for(i=0;i<n-1;i++)
    {
		if(num[i] < num[i+1])
        {
            result = num[i+1];
        }
    }
    printf("%d\n", result);
}
