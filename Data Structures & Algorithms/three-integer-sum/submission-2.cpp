class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (size_t i = 0; i < nums.size(); i++){
            if (i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            int p1 = i + 1;
            int p2 = nums.size() - 1;

            

            while (p1 < p2){
                int sum = nums[p1] + nums[p2] + nums[i];

                if (sum > 0){
                    p2--;
                } else if (sum < 0){
                    p1++;
                } else {
                    vector<int> temp = {nums[p1], nums[p2], nums[i]};
                    ans.push_back(temp);
                    p1++;
                    p2--;
                    while (p1 < p2 && nums[p1] == nums[p1 - 1]){
                    p1++;
                }
                    while (p1 < p2 && nums[p2] == nums[p2 + 1]){
                    p2--;
                    }
                    
                }
            }
        }
        return ans;

    }
};
