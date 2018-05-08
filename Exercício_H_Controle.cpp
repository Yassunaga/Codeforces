#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int vet[1000000], n, l, r; 
	cin >> n >> l >> r;
	
	for(int i=1; i<=n; i++)
	{
		cin >> vet[i];
	}
	
	for(int j=1;j<=n;j++)
	{
		if(j==l)
		{
			for(int i=r;i>=l;i--)
			{
				cout << vet[i] << " ";
			}
			if(r==n)
				break;
			else
			j = r+1;
		}
		cout << vet[j] << endl;			
	}
	
	return 0;
}
