// Count subsequences whose sum is k
// "Subsequences": A contiguous or non-contiguous sequence which follows order.

// arr = [1,2,1]
// o/p = 2

#include<bits/stdc++.h>
using namespace std;

int printSubsequence(int idx, int sum, int arr[], int n, int k)
{
	if(idx == n)
	{
		if(sum == k)
		{
			return 1;
		}
		return 0;
	}

	//pick
	sum += arr[idx];
	int l = printSubsequence(idx+1,sum,arr,n,k);
	sum -= arr[idx];

	//not pick
	int r = printSubsequence(idx+1,sum,arr,n,k);

	return l+r;
	
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin>>arr[i];
	vector<int> ds;
	cout<<printSubsequence(0, 0, arr, n, k);
	
	return 0;
}


// For every place we have 2 options whether to pick or not.
// If we have 'n' elements, we have 2^n choices. Therfore,
// Time complexity: O(2^n)

// Space complexity: O(n)
