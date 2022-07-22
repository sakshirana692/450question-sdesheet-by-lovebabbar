int maxProfit(vector<int>& prices) {
        int buy;
        int sell=INT_MIN;
     for(int i=0;i<prices.size();i++)
     {buy=min(buy,prices[i]);
        sell=max(sell,prices[i]-buy);}
        return sell;
    }