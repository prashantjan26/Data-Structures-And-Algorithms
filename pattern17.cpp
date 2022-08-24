// print the pattern

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i = 1; i <= n; i++)
	{
		char ch = 'A';
		for(int j = n; j > i; j--)
		{
			cout<<" ";
		}
		for(int k = 1; k <= i; k++)
		{
			cout<<ch;
			ch++;
		}
		ch--;
		for(int k = 1; k < i; k++)
		{
			ch --;
			cout<<ch;
		}
		cout<<endl;
	}
	return 0;
}
