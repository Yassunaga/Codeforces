#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i;
    int n;
    int *num;
    int result=0;

    scanf("%d", &n);
    num = (int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
	{
		scanf("%d", &num[i]);
	}

    for(i=0;i<n;i++)
    {
		result += num[i];
    }
    printf("%d\n", result);
}
