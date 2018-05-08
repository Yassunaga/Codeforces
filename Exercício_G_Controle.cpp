#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	long long int vet[1000000];
	int i;
	
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		cin >> vet[i];
	}
	
	sort(vet, vet+n);
	
	for(i=0;i<n;i++)
	{
		cout << vet[i] << " ";
	}
	cout << endl;
	
	return 0;
}
