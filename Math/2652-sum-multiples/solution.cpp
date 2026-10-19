class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        for(int a = 2 ; a <= n ; a++){
            if(a%3 == 0 || a%5 == 0 || a%7 == 0){
                sum+=a;
            }
        }
        return sum;
    }
};
