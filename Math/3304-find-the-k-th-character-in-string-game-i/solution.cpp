class Solution {
public:
    char kthCharacter(int k) {
        int count = 0;
        while(k!=1){
            int over = log2(k-1);
            over = pow(2,over);
            k = k - over;
            count++;
        }
        return char('a'+count);
    }
};
