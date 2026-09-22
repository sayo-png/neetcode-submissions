#include <string>
class Solution {
public:
    int calPoints(vector<string>& operations) {
       vector<int> ans;
       int index = 0;

       for (size_t i = 0; i < operations.size(); i++){
        if (operations[i] == "+"){
            ans.push_back(ans[index - 2] + ans[index - 1]);
            index++;
        } else if (operations[i] == "D"){
            ans.push_back(ans[index - 1] * 2);
            index++;
        } else if (operations[i] == "C"){
            ans.pop_back();
            index--;
        } else {
            ans.push_back(stoi(operations[i]));
            index++;
        }
       } 

        int total = 0;
        for (size_t i = 0; i < ans.size(); i++){
            total += ans[i];
        }
       return total;
    }
};