class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
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
