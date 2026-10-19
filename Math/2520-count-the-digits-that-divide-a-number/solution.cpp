class Solution {
public:
    int countDigits(int num) {
        vector<int> number(9,0);
        int num_del= num;
        int count = 0;
        while(num_del != 0){
            number[num_del%10 - 1]++;
            num_del/=10;
        }
        for(int a = 1 ; a < 10 ; a++){
            if(number[a-1] != 0){
                if(num % a == 0){
                    count+=number[a-1];
                }
            }
        }
        return count;
    }
};
