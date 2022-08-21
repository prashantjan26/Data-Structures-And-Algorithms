// print all subsequences
// "Subsequences": A contiguous or non-contiguous sequence which follows order.

// arr = [3,1,2]
// subsequences are {}
//                  {3}
//                  {1}
//                  {2}
//                  {3,1}
//                  {3,2}
//                  {1,2}
//                  {3,1,2}

// Leetcode problem link: https://leetcode.com/problems/subsets/

#include<bits/stdc++.h>
using namespace std;

void printSubsequence(int idx, vector<int> &ds, int arr[], int n)
{
	if(n == 0)
		return {};
	if(idx >= n)
	{
		for(auto it: ds) {
			cout<< it <<" ";
		}
		cout<<endl;
		return;
	}
	ds.push_back(arr[idx]);
	printSubsequence(idx+1,ds,arr,n);
	ds.pop_back();
	printSubsequence(idx+1,ds,arr,n);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin>>arr[i];
	vector<int> ds;
	printSubsequence(0, ds, arr, n);
	
	return 0;
}

// Time Complexity: O(2^n x n)
// space Complexity: O(n)
