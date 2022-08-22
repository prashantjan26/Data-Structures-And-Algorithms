//Leetcode problem link: https://leetcode.com/problems/subsets-ii/

//Weare not using base condition as we want every subset to store into 'ans' vector
//for loop will automatically return when condition is over

class Solution {
public:
    void find_subset(int idx, vector<int> & ds, vector<int> &nums, vector<vector<int>> &ans)
    {
        ans.push_back(ds);
        for(int i = idx; i < nums.size(); i++)
        {
            if(i != idx && nums[i] == nums[i-1])
                continue;
            ds.push_back(nums[i]);
            find_subset(i+1,ds,nums,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        find_subset(0,ds,nums,ans);
        return ans;
    }
};

//Time complexity: O(2^n * n)
//Space complexity: O(2^n) x O(k)
//Auxiliary space: O(n)
