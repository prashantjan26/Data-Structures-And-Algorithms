// Factorial of a number
// Example: 5! = 120

#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	if(n == 1)
		return 1;
	return n * factorial(n-1);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	cout<<factorial(n);
	return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)