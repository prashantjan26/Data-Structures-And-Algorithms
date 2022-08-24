// print the pattern

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i = 0; i < n; i++)
	{
		for(int k = 0; k < i+1; k++)
		{
			if((i+k) % 2 != 0)
				cout<<"0 ";
			else if((i+k) % 2 == 0)
				cout<<"1 ";
		}
		cout<<endl;
	}
	return 0;
}
