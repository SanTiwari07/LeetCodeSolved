class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd= n*n;
        int even = n*(n+1);
        int min;
        if(odd>even){
            min = even;
        }else{
            min = odd;
        }
        for(int a = min ; a >=1 ; a--){
            if(odd%a == 0 && even%a == 0){
                return a;
            }
        }
        return 1;
    }
};
