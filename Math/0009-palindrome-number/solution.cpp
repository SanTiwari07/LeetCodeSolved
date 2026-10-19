class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 ){
            return false;
        }
        string str = to_string(x);
        for(int a = 0 ; a < str.size()/2 ; a++){
            if(str[a] != str[str.size()-1-a]){
                return false;
            }
        }
        return true;
    }
};
