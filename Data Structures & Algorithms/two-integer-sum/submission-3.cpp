class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> copy = nums;
        sort(copy.begin(), copy.end());
       int b = 0;
       int e = copy.size() - 1;

       for (size_t i = 0; i < copy.size(); i++){
        if (copy[b] + copy[e] == target){
            break;
        } else if (copy[b] + copy[e] > target){
            e--;
        } else {
            b++;
        }
       } 
       vector<int> ans;
       for (size_t i = 0; i < copy.size(); i++){
        if (copy[e] == nums[i]){
            ans.push_back(i);
            
        } else if (copy[b] == nums[i]){
            ans.push_back(i);
        }
       }

       sort(ans.begin(), ans.end());
       return ans;
    }
};
