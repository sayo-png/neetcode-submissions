class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        sort(numbers.begin(), numbers.end());

        int i1 = 0;
        int i2 = numbers.size() - 1;

        while (numbers[i1] + numbers[i2] != target){
            if (numbers[i1] + numbers[i2] > target){
                i2--;
            } else{
                i1++;
            }
        }

        

        return {i1 + 1, i2 + 1};
    }
};
