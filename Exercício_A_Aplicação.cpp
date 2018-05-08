#include<bits/stdc++.h>

using namespace std;

int main()
{
	int vet[100], maior=0, n, cont=0;
	cin >> n;
	for(int i=1; i<=n;i++)
	{
		cin >> vet[i];
		if(vet[i] > maior)
		{
			maior = vet[i];
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		cont += (maior - vet[i]); 
	}
	cout << cont;
	
	return 0;
}

