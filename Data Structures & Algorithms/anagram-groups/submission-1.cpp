class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        /*vector<vector<string>> ans(strs.size());
        if (strs.size() == 1){
            ans[0].push_back(strs[0]);
            return ans;
        }
        vector<string> copy = strs;

        sort(copy.begin(), copy.end());

        vector<string> copy2 = copy;

        for (size_t i = 0; i < copy.size(); i++){
            sort(copy[i].begin(), copy[i].end());
        }

        sort(copy.begin(), copy.end());



        int index = 0;
        int etc = 0;
        vector<vector<int>> num(ans.size());
        num[etc].push_back(index);
        for (size_t i = 0; i < copy.size(); i++){
            if (i != index){
                if (copy[index] == copy[i]){
                    num[etc].push_back(i);
                } else {
                    etc++;
                    index = i;
                    num[etc].push_back(i);
                }
            }
        }
        vector<vector<string>> ans2;

        for (size_t i = 0; i < num.size(); i++){
            if (!num[i].empty()){
                ans2.push_back(vector<string>());
                for (size_t j = 0; j < num[i].size(); j++){
                    ans2[i].push_back(copy2[num[i][j]]);
                }
            }
        }
        return ans2;*/

        unordered_map<string, vector<string>> res;

        for (int i = 0; i < strs.size(); i++){
            vector<char> count(26, 0);

            for (char c: strs[i]){
                count[c - 'a']++;
            }

            string key;
            for (int j = 0; j < 26; j++){
                key += to_string(count[j]) + "#";
            }
            res[key].push_back(strs[i]);
    }
     vector<vector<string>> result;
        for (auto pair: res){
            result.push_back(pair.second);
        }
        return result;
    }
};
