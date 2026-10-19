class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int answer = 0;
        int min_day = prices[0];
        for(int a = 0 ; a < prices.size() ; a++){
            min_day = min(min_day,prices[a]);
            if(prices[a]-min_day > 0){
                answer=max(answer,prices[a]-min_day);
            }
        }
        return answer;
        
    }
};
