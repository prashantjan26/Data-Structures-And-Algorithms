// print the pattern

// 1      1
// 12    21
// 123  321
// 12344321

// 6 space
// 4 space
// 2 space

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i = 1; i <= n; i++)
	{
		for(int it = 1; it <= i; it++)
			cout<<it;
		for(int j = 1; j <= 2*(n-i); j++)
			cout<<" ";
		for(int itr = i; itr >= 1; itr--)
			cout<<itr;
		cout<<endl;
	}
	return 0;
}
