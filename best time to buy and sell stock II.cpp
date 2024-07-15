class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int j = prices.size() - 1, i = j - 1, maxp = 0;
        while (i >= 0) {
            if (prices[j] - prices[i] > 0) {
                maxp = maxp + prices[j] - prices[i];
                j--;
            }
            else j = i;
            i--;
        }
        return maxp;
    }
};