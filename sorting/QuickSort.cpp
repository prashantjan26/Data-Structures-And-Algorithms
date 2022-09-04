#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int r)
{
	int i = l-1;
	int pivot = r;
	for(int j = l; j < r; j++)
	{
		if(arr[j] < pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[r]);
	return i+1;
}

void quickSort(int arr[],int l, int r)
{
	if(l < r)
	{
		int pi = partition(arr,l,r);
		quickSort(arr,l,pi-1);
		quickSort(arr,pi+1,r);
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Array before sorting :";
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Array after sorting :";
	quickSort(arr,0,n-1);
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

return 0;
}


// TC: O(n log(n)) -> best case (when max element is at middle index)
// TC: O(nxn)      -> worst case (when max element is at last index)

//SC: O(1)
