class Solution {
public:
    int maxFreqSum(string s) {
        int frequency[26]={0};
        for(int a = 0 ; a < s.length() ; a++){
            frequency[s[a]-'a']++;
        }
        int max1=0;
        int max2=0;
        for(int a = 0 ; a < 26 ; a++){
            if(a == 0 || a == 4 || a == 8 || a == 14 || a == 20){
                max1 = max(max1,frequency[a]);
            }else{
                max2 = max(max2,frequency[a]);
            }
        }
        return max1+max2;
    }
};
