class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        

        if (nums.size() == 1 && nums[0] == target){
            return 0;
        } else if (nums.size() == 2){
            if (nums[0] == target){
                return 0;
            } else if (nums[1] == target){
                return 1;
            }
        }
         else if (nums.size() == 1 || nums.size() == 2 ){
            return -1;
        }
    
        while (l <= r) {
            int i = l + (r - l) / 2;

            if (nums[i] > target){
                r = i - 1;
            } else if (nums[i] < target){
                l = i + 1;
            } else {
                return i;
            }

        }
        return -1;
    }
};
