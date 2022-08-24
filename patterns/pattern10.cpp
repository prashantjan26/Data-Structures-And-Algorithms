// print the pattern

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i = 1; i <= n; i++)
	{
		for(int k = 0; k < i; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i = n; i > 0; i--)
	{
		for(int k = i; k > 1; k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
