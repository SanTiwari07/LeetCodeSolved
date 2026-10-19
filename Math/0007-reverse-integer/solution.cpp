class Solution {
public:
    int reverse(long long x) {
        
        long long number = 0;
        if(x < 0){
            x = -x;
            while(x > 0){
                
                number = 10*number + x%10;
                if(number > INT_MAX || number < INT_MIN) return 0;
                x = x/10;
            }
            return -number;
        }
        while(x > 0){
                number = 10*number + x%10;
                if(number > INT_MAX || number < INT_MIN) return 0;
                x = x/10;
            }
        return number;
    }
};
