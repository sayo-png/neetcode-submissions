class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> answer;

        if (intervals.size() == 0){
            return answer;
        }
        if (intervals.size() == 1){
            return intervals;
        }

        vector<int> current = intervals[0];

        for (size_t i = 1; i < intervals.size();  i++){
        
            int beginSecond = intervals[i][0];

            if (beginSecond <= current[1]){
                current = {current[0], max(intervals[i][1], current[1])};
            } else {
                answer.push_back(current);
                current = intervals[i];
            } 
         }
        answer.push_back(current);
        return answer;
        }
};
