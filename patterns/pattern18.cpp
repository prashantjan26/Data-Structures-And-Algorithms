// print the pattern

// E
// D E
// C D E
// B C D E
// A B C D E

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	char ch = 'E';
	for(int i = 1; i <= n; i++)
	{
		char temp = ch;
		for(int k = 1; k <= i; k++)
		{
			cout<<temp<<" ";
			temp++;
		}
		cout<<endl;
		ch--;
	}
	return 0;
}
