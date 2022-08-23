// print the pattern

// *********
//  *******
//   *****
//    ***
//     *

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;
	cin>>n;

	for(int i = n; i > 0; i--)
	{
		for(int j = n; j > i; j--)
		{
			cout<<" ";
		}
		for(int k = 2*i; k > 1; k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
