class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";

        for(size_t i = 0; i < strs.size(); i++){
            s += strs[i];
            s += "~";
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        string temp = "";
        int begin = 0; 
        int length = 1;

        for (size_t i = 0; i < s.length(); i++){
            if (s[i] == '~'){
                temp = s.substr(begin, length - 1);
                strs.push_back(temp);
                begin = i + 1;
                length = 1;
            } else {
                length++;
            }
        }
        return strs;
    }
};
