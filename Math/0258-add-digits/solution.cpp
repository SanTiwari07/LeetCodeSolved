class Solution {
public:
    int rece(int num){
        if(num == num%10){
            return num;
        }
        int new_num=0;
        while (num != 0){
            new_num+=num%10;
            num = num /10;
        }
        if(new_num == num%10) return new_num;
        else return rece(new_num);
    }
    int addDigits(int num) {
        return rece(num);
    }
};
