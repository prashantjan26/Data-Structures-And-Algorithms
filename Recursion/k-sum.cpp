// print all subsequences whose sum is k
// "Subsequences": A contiguous or non-contiguous sequence which follows order.

// arr = [1,2,1]
// o/p = {1,1},{2}

#include<bits/stdc++.h>
using namespace std;

void printSubsequence(int idx, vector<int> &ds, int sum, int arr[], int n, int k)
{
	if(idx == n)
	{
		if(sum == k)
		{
			for(auto it: ds) cout<< it <<" ";
			cout<<endl;
		}
	return;
	}

	//pick
	ds.push_back(arr[idx]);
	sum += arr[idx];
	printSubsequence(idx+1,ds,sum,arr,n,k);
	ds.pop_back();
	sum -= arr[idx];

	//not pick
	printSubsequence(idx+1,ds,sum,arr,n,k);
	
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
	printSubsequence(0, ds, 0, arr, n, k);
	
	return 0;
}


// For every place we have 2 options whether to pick or not.
// If we have 'n' elements, we have 2^n choices. Therfore,
// Time complexity: O(2^n)

// Space complexity: O(n)
