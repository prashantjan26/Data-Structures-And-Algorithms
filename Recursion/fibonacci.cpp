//Multiple recursion calls

// fibonacci series
// 0 1 1 2 3 5 8 13 21 ...

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
	if(n <= 1)
		return n;
	int last = fibonacci(n-1);
	int slast = fibonacci(n-2);
	return last + slast;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;

	cout<<fibonacci(n);

	return 0;
}


// Time Complexity: O(2^n) -> exponential;
// Space Complexity: auxiliary space: O(2^n);