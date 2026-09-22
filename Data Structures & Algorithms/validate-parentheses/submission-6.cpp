class Solution {
public:
    bool isValid(string s) {
        // create a stack
        // if open add to stack
        // if close check last of stack and see if it matches 
        if (s.length() < 2 || s[0] == ']' || s[0] == ')' || s[0] == '}' || s.length() % 2 == 1){
            return false;
        }

        stack<char> open;
        bool sawClose = false;

        for (int i = 0; i < s.length(); i++){
             if (open.empty() && (s[i] == ']' || s[i] == ')' || s[i] == '}')){
                return false;
            } else if (s[i] == '[' || s[i] == '(' || s[i] == '{'){
                open.push(s[i]);
            } else if (s[i] == ']' && open.top() == '['){
                open.pop();
                sawClose = true;
            } else if (s[i] == ')' && open.top() == '('){
                open.pop();
                sawClose = true;
            } else if (s[i] == '}' && open.top() == '{'){
                open.pop();
                sawClose = true;
            } else {
                return false;
            }
        }
        if (!sawClose){
            return false;
        } else if (!open.empty()){
            return false;
        } else {
            return true;
        }
    }
};
