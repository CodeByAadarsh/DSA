class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> bestbuy(n);
        bestbuy[0]=prices[0];
        for(int i=1;i<prices.size();i++){
            bestbuy[i]=min(prices[i-1],bestbuy[i-1]);
        }
        int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            int currprofit=prices[i]-bestbuy[i];
            maxprofit=max(currprofit,maxprofit);
        }
        return maxprofit;

    }
};