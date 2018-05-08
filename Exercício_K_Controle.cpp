#include<bits/stdc++.h>

using namespace std;

int main()
{
	int vet[100];
	int n, i;
	
	cin >> n;
	for(i=1;i<=n;i++)
		cin >> vet[i];
	
	int cont = n+1;
	int j;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(vet[i] == vet[j])
			{
				cont = cont -2;
			}
		}
	}
	cout << cont << endl;
	
	return 0;
}
