// print the pattern

// ABCDE
// ABCD
// ABC
// AB
// A

#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;

	for(int i = 1; i <= n; i++)
	{
		char ch = 'A';
		for(int j = n; j >= i; j--)
		{
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
	return 0;
}
