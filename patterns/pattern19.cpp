// print the pattern

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i = 1; i <= n; i++)
	{
		for(int j = n; j >= i; j--)
		{
			cout<<"*";
		}
		for(int k = 1; k < i; k++)
			cout<<"  ";
		for(int k = n; k >= i; k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i = 5; i >= 1; i--)
	{
		for(int j = n; j >= i; j--)
		{
			cout<<"*";
		}
		for(int k = i; k > 1; k--)
			cout<<"  ";
		for(int k = n; k >= i; k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}
