class Solution {
public:
    int maxArea(vector<int>& heights) {
       // pick the hieghts that are the heights and farthest part

       int begin = 0;
       int end = heights.size() - 1;

       int largestBucket = 0; 

       while (begin < end){
        if (min(heights[begin], heights[end]) * (end - begin) > largestBucket){
            largestBucket = min(heights[begin], heights[end]) * (end - begin);
        }

        if (heights[begin] < heights[end]){
            begin++;
            
        } else {
            end--;
        }
       }
       return largestBucket;
    }
};
