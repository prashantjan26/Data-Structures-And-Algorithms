// GFG Link: https://practice.geeksforgeeks.org/problems/subset-sums2234/1

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void helper(int idx, int sum, vector<int> &subset, vector<int> &arr, int N)
    {
        if(idx == N)
        {
            subset.push_back(sum);
            return;
        }
        helper(idx+1,sum+arr[idx],subset,arr,N);
        helper(idx+1,sum,subset,arr,N);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int > subset;
        helper(0,0,subset,arr,N);
        sort(subset.begin(),subset.end());
        return subset;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends

//Time complexit: O(2^n + 2^n log(2^n))
//Space complexity: O(2^n)
