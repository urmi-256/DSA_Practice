class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0],profit = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]< buy){
                buy = prices[i];
            }
            if(buy <= prices[i]){
                profit = max((prices[i]-buy),profit);
            }
        }
        return profit;
        // Time - O(n) SC - O(1)
    }
};