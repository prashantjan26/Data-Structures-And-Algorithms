// Leetcode problem link: https://leetcode.com/problems/combination-sum/

class Solution {
public:
    void helper(int idx,int target,vector<int>& candidates,
                vector<int> &ds,vector<vector<int>> &ans)
    {
        if(idx == candidates.size())
        {
            if(target == 0)
            ans.push_back(ds);
            return;
        }
        
        
        
        //if you choose to pick
        if(candidates[idx] <= target)
        {
            ds.push_back(candidates[idx]);
            helper(idx,target-candidates[idx],candidates,ds,ans);
            ds.pop_back();
        }
        //if you choose not to pick up
        helper(idx+1,target,candidates,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>> ans;
        helper(0,target,candidates,ds,ans);
        return ans;
    }
};

// Time complexity: O(2^t * k)

// Space complexity: O(k*x)
