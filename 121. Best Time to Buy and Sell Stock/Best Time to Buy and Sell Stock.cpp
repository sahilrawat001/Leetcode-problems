class Solution {
public:
    int maxProfit(vector<int>& prices) {
  int minprice=prices[0];
     int   maxprofit=0;
        int profit;
     for(int i=0;i<prices.size();i++){
         minprice=min(minprice,prices[i] );
         profit=prices[i]-minprice;
         maxprofit= max(maxprofit,profit);
        }
        return maxprofit; 
}    //end    
  
};