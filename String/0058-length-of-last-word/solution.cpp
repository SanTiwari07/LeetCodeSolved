class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int final= 0;
        for(int a = 0 ; a <= s.size()-1 ; a++){
            if(s[a] != ' '){
                count++;
                final = count;
            }
            
            if(s[a]==' ' && s[a+1] != ' '){
                count = 0;
            }
        }
        return final;
    }
};
