class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> b(n);
        string res = b.to_string();
        int count = 0;
        for(int a = 0 ; a < res.length() ; a++){
            if(res[a]== '1'){
                count++;
            }
        }
        return count;
    }
};
