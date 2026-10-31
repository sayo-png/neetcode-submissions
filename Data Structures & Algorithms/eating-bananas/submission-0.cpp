class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());

        while (l < r){
            int bph = l + (r - l) / 2;

            int hours = 0;

            for (size_t i = 0; i < piles.size(); i++){
                hours += ceil((double)piles[i] / bph);
            }

            if (hours > h){
                l = bph + 1;
            } else {
                r = bph;
            }
        }

        return l;
    }
};
