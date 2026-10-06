class MinStack {
private:
    vector<int> s;
public:
    MinStack() {
        
    }
    
    void push(int val) {
       s.push_back(val); 
    }
    
    void pop() {
        s.pop_back();

    }
    
    int top() {
       return s[s.size() - 1];
    }
    
    int getMin() {
        int min = s[0];
        for (size_t i = 1; i < s.size(); i++){
            if (s[i] < min){
                min = s[i];
            }
        }
        return min;
    }
};
