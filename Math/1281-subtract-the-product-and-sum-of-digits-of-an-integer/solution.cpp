class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = n;
        int pro = 1;
        int sum = 0;
        while(temp != 0){
            sum+=(temp % 10);
            pro*=(temp % 10);
            temp/=10;
        }
        return pro - sum;
    }
};
