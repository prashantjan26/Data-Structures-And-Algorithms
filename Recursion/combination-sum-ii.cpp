// Leetcode problem link: https://leetcode.com/problems/combination-sum-ii/

class Solution {
public:
    void helper(int idx,int target,vector<int> &candidates,vector<int> &ds, vector<vector<int>> &ans)
    {
        if(target == 0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i = idx; i < candidates.size(); i++)
        {
            if(i > idx && candidates[i] == candidates[i-1])
                continue;
            if(candidates[i] > target)
                break;
            ds.push_back(candidates[i]);
            helper(i+1,target-candidates[i],candidates,ds,ans);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        helper(0,target,candidates,ds,ans);
        return ans;
    }
};

// Time complexity: O(2^n * k)

// Space complexity: O(k*x)
