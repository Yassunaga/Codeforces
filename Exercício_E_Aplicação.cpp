#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, a, rest;
	
	cin >> n >> a;
	
	rest = n%500;
	
	if(a>=rest)
		cout << "Sim" << endl;
	
	else 
		cout << "Nao" << endl;
	
	return 0;
}

