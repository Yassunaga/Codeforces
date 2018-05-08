#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	
	cin >> s;
	cout << s << endl;
	for(;next_permutation(s.begin(), s.end());)
	{
		cout << s << endl;
	}

	return 0;
}
