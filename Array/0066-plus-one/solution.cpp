class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int a = digits.size()-1 ; a >= 0 ; a--){
            if(digits[a]<9){
                digits[a]+=1;
                return digits;
            }
            else{
                digits[a]=0;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
