class Solution {
public:
    int countKeyChanges(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int count = 0;
        for(int a = 0 ; a < s.length()-1 ; a++){
            if(s[a] != s[a+1]){
                count++;
            }
        }
        return count;
    }
};
