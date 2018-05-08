#include<bits/stdc++.h>

using namespace std;

static long long int suf[1000000];
static long long int pre[1000000];
static long long int vet[1000000];

int main()
{
	int n, q, l, r;
	long long int ans;
	long long int t=0;
	cin >> n >> q;
	for(int i=1; i<=n; i++)
	{
		cin >> vet[i];
		t += vet[i];
		pre[i] = pre[i-1] + vet[i];
	}
	
	for(int i=n; i>=1; i--)
	{
		suf[i] = suf[i+1] +vet[i];
	}
	
	int j;
	for(int i=0; i<q;i++)
	{
		cin >> l >> r;
		ans = t - pre[l-1] - suf[r+1];
		cout << ans << endl;		
	}
	return 0;
}
