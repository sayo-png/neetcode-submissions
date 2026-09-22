class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);

     int pre = 1;

     for (size_t i = 0; i < nums.size(); i++){
        ans[i] = pre;
        pre *= nums[i];
     }

     int suffix = 1;

     for (int i = nums.size() - 1; i >= 0; i--){
        ans[i] *= suffix;
        suffix *= nums[i];
     }

     return ans;
    }
};
