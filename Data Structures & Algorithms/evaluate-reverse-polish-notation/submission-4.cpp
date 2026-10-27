class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // if is a number add to the variables

        // if not a number do the arthmetic

        int num1 = 0;
        int num2 = 0;
        int runningTotal = 0;
        stack<int> nums;
        stack<int> transfer = {};


        for (size_t i = 0; i < tokens.size(); i++){
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/" && tokens[i] != "*" ) {
                nums.push(stoi(tokens[i]));
            } else {
                    num2 = nums.top();
                    nums.pop();
                    num1 = nums.top();
                    nums.pop();
                if (tokens[i] == "+"){
                    runningTotal = num1 + num2;
                    nums.push(runningTotal);
                } else if (tokens[i] == "-") {
                    runningTotal = num1 - num2;
                    nums.push(runningTotal);
                } else if (tokens[i] == "*"){
                    runningTotal = num1 * num2;
                    nums.push(runningTotal);
                } else if (tokens[i] == "/"){
                    runningTotal = num1 / num2;
                    nums.push(runningTotal);
                }

            }
        }
        return nums.top();
    }
};
