class Solution {
public:
    int mySqrt(int x) {
        double num = x;
        double y = 1;
        double precision = 1e-6;

        while(num - y > precision){
            num = (num + y)/2;
            y = x/num;
        }

        return num;
    }

};
