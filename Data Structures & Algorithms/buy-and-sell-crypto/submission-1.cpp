class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // buy pointer at start
        // sell pointer at end
        // while they are not equal and buy is less than sell continue to find the highest one
        // keep variable of profit and see which one was the highest

        int buy = 0;
        int sell = prices.size() - 1;
        int profit = 0;
        //bool moveSell = true;

        while (buy < sell){
            int temp = prices[sell] - prices[buy];

            if (temp > profit){
                profit = temp;
            } else {
                if (buy + 1 == sell){
                    sell -= 1;
                    buy = 0;
                    //moveSell = false;
                } else {
                    buy += 1;
                    //moveSell = true;
                }
            }
        }

        return profit;


    }
};
