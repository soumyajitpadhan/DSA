class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> temp(nums.size());
        
        for(int i=0; i<nums.size(); i++) {
            temp[(i+k)%nums.size()] = nums[i];
        }
        
        //copy temp into nums vector
        
        nums = temp;
        //T.C = o(n) , S.C = o(n)
    }
};


class Solution {
public:
    void reverse(vector<int>& nums, int s, int e) {
        
        while(s<e)
        {
            swap(nums[s], nums[e]);
            s++;
            e--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        
        k = k % nums.size();
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, nums.size()-1);
        //T.C = o(n) , S.C = o(1)
    }
    
};

