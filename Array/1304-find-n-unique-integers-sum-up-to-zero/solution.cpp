class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>answer;
        if(n == 1) return {0};
        for(int a = n/2 ; a > 0 ; a--){
            answer.push_back(a*2);
            answer.push_back(-a*2);
        }
        if(n % 2 != 0){
            answer.push_back(0);
        }
        return answer;
    }
};
