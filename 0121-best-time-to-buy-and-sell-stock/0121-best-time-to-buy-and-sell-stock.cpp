class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int max = 0;
        for(auto price:prices){
            if(min > price){
                min = price;
            }
            if(price-min>max){
                max = price-min;
            }
        }
        return max;
    }
};