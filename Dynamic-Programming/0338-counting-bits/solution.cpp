class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>answer;
        for(int a = 0 ; a <=n ; a++){
            bitset<32> b(a);
            answer.push_back(b.count());
        }
        return answer;
    }
};
