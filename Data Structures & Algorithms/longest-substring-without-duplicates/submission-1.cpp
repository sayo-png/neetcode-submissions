class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // need a start index and an end index
        // between the start and end I need to check if there are any duplicates
        // if there are then move the start up until i reach start + 1 = end
        // the first one I find is the answer because I want the longest one and the longest one I find would be the first one

        int start = 0;
        int end = 0; 
        int length = 0;
        string potential = "";
        bool founddup = false;
        unordered_set<char> check;


        while (end < s.length()){
            if (check.find(s[end]) != check.end()){
                check.erase(s[start]);
                start++;
            } else {
                check.insert(s[end]);
                end++;

                if (end - start > length){
                    length = end - start;

                }
            }
        }
        return length;
    }
};
