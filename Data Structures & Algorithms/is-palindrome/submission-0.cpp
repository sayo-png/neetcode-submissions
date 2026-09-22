class Solution {
public:
    bool isPalindrome(string s) {
        string updateS = s;
        updateS.erase(remove_if(updateS.begin(), updateS.end(), [](char c) {
            return !isalnum(c);
        }), updateS.end());
        for (size_t i = 0; i < s.length(); i++){
            if (isalpha(updateS[i]) || isdigit(updateS[i])){
                updateS[i] = tolower(updateS[i]);
            }
        }

        string copy = updateS;

        reverse(copy.begin(), copy.end());

        if (updateS == copy){
            return true; 
        } else {
            return false;
        }
    }
};
