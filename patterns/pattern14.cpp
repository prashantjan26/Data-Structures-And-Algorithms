// print the pattern

// A
// AB
// ABC
// ABCD
// ABCDE

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
		for(int j = 1; j <= i; j++)
		{
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
	return 0;
}
