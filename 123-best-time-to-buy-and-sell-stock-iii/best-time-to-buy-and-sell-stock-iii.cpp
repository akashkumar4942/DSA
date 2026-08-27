class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int firstbuy=INT_MIN;
        int firstsell=0;
        int secondbuy=INT_MIN;
        int secondsell=0;
        for(int price:prices){
            firstbuy=max(firstbuy,-price);
            firstsell=max(firstsell,firstbuy+price);
            secondbuy=max(secondbuy,firstsell-price);
            secondsell=max(secondsell,secondbuy+price);
        }
        return secondsell;
       
        
    }
};