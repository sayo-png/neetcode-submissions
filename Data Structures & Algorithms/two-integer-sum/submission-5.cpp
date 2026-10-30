class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*put it in an unordered_set

        iterate through the list and subtract from the target

        then use find to find the number in the unordered map which will return an interator
        */

        unordered_map<int, int> eachNum;
        vector<int> answer;

        for (size_t i = 0; i < nums.size(); i++){
            eachNum.insert({nums[i], i});
        } 

        for (size_t i = 0; i < nums.size(); i++){
            int looking = target - nums[i];

            
            if (eachNum.find(looking) != eachNum.end()){
                if (i != eachNum.find(looking)->second){
                    answer.push_back(i);
                    answer.push_back(eachNum.find(looking)->second);
                    break;
                }
            }
        }
        sort(answer.begin(), answer.end());
        return answer;
    }
};
