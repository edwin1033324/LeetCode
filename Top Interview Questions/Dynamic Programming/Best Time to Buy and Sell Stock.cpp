// Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0, buy = Integer.MAX_VALUE;
        for (int price : prices) 
        {
            buy = Math.min(buy, price);
            res = Math.max(res, price - buy);
        }
        return res;
    }
};
