class Solution {
private:
    void solve(vector<int> nums, int index, vector<vector<int>>& ans, vector<int> output) {
        //base case
        if(index >= nums.size()) {
            ans.push_back(output);
            return ;
        }

        //exclude
        solve(nums, index+1, ans, output);

        //inclde
        int element = nums[index];
        output.push_back(element);
        solve(nums, index+1, ans, output);

    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {

        int index = 0;
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums, index, ans, output);
        return ans;
        
    }
};
