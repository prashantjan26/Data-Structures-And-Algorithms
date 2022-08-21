//Reverse an array of size n
// I/P: 1 3 5 7 2
// O/P: 2 7 5 3 1

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i, int arr[], int n)
{
	if(i >= n/2)
		return;
	swap(arr[i], arr[n-i-1]);
	reverseArray(i+1,arr,n);
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
	reverseArray(0,arr,n);
	for(int i = 0; i < n; i++)
		cout<<arr[i]<<" ";
	return 0;
}

// Time Complexity: O(n/2)
// Space Complexity: O(n/2)