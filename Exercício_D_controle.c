#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fibo(int n);

int main()
{
	int n;
	int result;
	
	scanf("%d", &n);
	
	result = fibo(n);
	
	printf("%d\n", result);
}

int fibo(int n)
{	
	int result;
	
	if(n == 0)
	{
		result = 0;
	}
	else if(n == 1)
	{
		result = 1;
	}
	else
	{
		result = fibo(n-1) + fibo(n-2);
	}
	return result;
	
}

