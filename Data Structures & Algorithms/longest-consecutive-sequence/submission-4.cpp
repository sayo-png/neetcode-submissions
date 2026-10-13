class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> unique;

        for (size_t i = 0; i < nums.size(); i++) {
            unique.insert(nums[i]);
        }

        int length = 0;
        int longestLength = 0;

        vector<int> uni;

        for (const auto& num : unique) {
            uni.push_back(num);
        }

        sort(uni.begin(), uni.end());

        if (uni.size() == 1){
            return 1;
        } else if (uni.size() == 0){
            return 0;
        }

        for (size_t i = 1; i < uni.size(); i++) {
            if (uni[i - 1] + 1 == uni[i]) {
                length++;
            } else {
                if (length + 1 > longestLength) {
                    longestLength = length + 1;
                }
                length = 0;
            }
        }
        if (length + 1 > longestLength) {
            longestLength = length + 1;
        }
        return longestLength;
    }
};
