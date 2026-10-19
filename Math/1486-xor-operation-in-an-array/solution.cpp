class Solution {
public:
    int xorOperation(int n, int start) {
        int sum=start;
        int final;
        for(int a = 0 ; a < n ; a++){
            final^=sum;
            sum += 2;
        }
        return final;
    }
};
