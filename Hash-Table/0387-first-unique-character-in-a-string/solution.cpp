class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> index(26,0);
        for(int a = s.length()-1 ; a >= 0 ; a--){
            index[s[a] - 'a']++;
        }
        for(int a = 0 ; a<s.length() ;a++){
            if(index[s[a] - 'a']==1) return a;
        }

        return -1;
    }
};
