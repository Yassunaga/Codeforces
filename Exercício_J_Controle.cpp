#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int i;
	string p[100000];
	
	cin>>n;
	set<string>pedra;

	for(i=0;i<n;i++)
	{
		cin >> p[i];
		pedra.insert(p[i]);
	}
	
	cout << pedra.size() << endl;
		
}
