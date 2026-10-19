class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>seen1;
        for(char a : s){
            if(seen1.count(a)){
                seen1[a]++;
            }
            else{
                seen1[a]=1;
            }
        }
        unordered_map<char, int>seen2;
        for(char a : t){
            if(seen2.count(a)){
                seen2[a]++;
            }
            else{
                seen2[a]=1;
            }
        }
        if(seen1 == seen2) return true;
        return false;
    }
};
