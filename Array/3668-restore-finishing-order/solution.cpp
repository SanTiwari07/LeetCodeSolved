class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>answer;
        for(int a = 0 ; a < order.size() ; a++){
            for(int b = 0 ;  b < friends.size() ; b++){
                if(order[a]==friends[b]){
                    answer.push_back(order[a]);
                    break;
                }
            }
        }
        return answer;
    }
};
