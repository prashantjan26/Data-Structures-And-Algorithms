// print the pattern


// ****
// *  *
// *  *
// *  *
// ****

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
  // n is the size of the column
	cin>>n;

	for(int i = 0; i < n+1; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == 0 || j == 0 || i == n ||j == n-1)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
