// Merge sort is a divide and conquer algorithm

#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
	int i = l;
	int j = mid+1;
	int temp[100];
	int k = l;
	while(i <= mid && j <= r)
	{
		if(arr[i] < arr[j])
		{
			temp[k] = arr[i];
			i++;
		}
		else
		{
			temp[k] = arr[j];
			j++;
		}
		k++;
	}
  
  // To print remaining elements from left array
	while(i <= mid) {
		temp[k++] = arr[i];
		i++;
	}
  
  // To print remaining elements from right array
	while(j <= r){
		temp[k++] = arr[j];
		j++;
	}
  
  // To copy elements from temporary array to original array
	for(int i = 0; i <= r; i++)
	{
		arr[i] = temp[i];
	}
}

void mergeSort(int arr[],int l, int r)
{
	if(l < r)
	{
		int mid = (l+r)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
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
	mergeSort(arr,0,n-1);
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

return 0;
}


// TC: O(n log(n))
// For dividing each array log n and for sorting n


//SC: O(n)
// to store variable in sorted array it takes O(n)
