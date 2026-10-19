class Solution {
public:
    int findTheWinner(int n, int k) {
        int winner = 0;
        for(int a = 2 ; a <= n ; a++){
            winner =(winner + k) % a;
        }
        return winner +1;
    }
};
