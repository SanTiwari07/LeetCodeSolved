class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>sam1(26,0);
        vector<int>sam2(26,0);
        if(s1.size() > s2.size()) return false;
        int left = 0 , right = 0;
        while(right<s1.size()){
            sam1[s1[right]-'a']+=1;
            sam2[s2[right]-'a']+=1;
            right+=1;
        }
        right-=1;
        while(right<s2.size()){
            if(sam1 == sam2) return true;
            right+=1;
            if(right != s2.size()) sam2[s2[right]-'a']+=1;
            sam2[s2[left]-'a']-=1;
            left+=1;
        }
        return false;
    }
};
