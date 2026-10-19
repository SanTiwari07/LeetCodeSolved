class Solution {
public:
    bool isPalindrome(string s) {
        string clean="";
        for(int i = 0 ; i < s.size(); i++){
            s[i]= tolower(s[i]);
            if((s[i]>='a' && s[i]<='z') ||(s[i]>='0' && s[i]<= '9')){
                clean.push_back(s[i]);
            }
        }
        if(clean =="")return true;
        for(int a = 0 ; a <= clean.size()/2 ; a++){
            if(clean[a] != clean[clean.size()-a-1]){
                return false;
            }
        }
        return true;
    }
};
