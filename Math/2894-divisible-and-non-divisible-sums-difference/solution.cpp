class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum1=0,sum2=0;
        for(int a = 1 ; a <= n ; a++){
            if(a%m != 0){
                sum1+=a;
            }else{
                sum2+=a;
            }
        }
        return sum1 - sum2;
    }
};
