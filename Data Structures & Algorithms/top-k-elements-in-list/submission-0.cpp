class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        unordered_map<int, int> freq;

        for (size_t i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }  

        vector<pair<int, int>> elements(freq.begin(), freq.end());

        sort(elements.begin(), elements.end(),
        [](const pair<int, int>& a, const pair<int, int>& b){
            return a.second > b.second;
        });

        vector<int> ans;

        for(size_t i = 0; i < k; i++){
            ans.push_back(elements[i].first);
        } 

        return ans;
    }
};
