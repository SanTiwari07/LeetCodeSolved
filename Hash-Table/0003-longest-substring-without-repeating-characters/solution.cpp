class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int start = 0, maxi = 0;

        for (int end = 0; end < s.size(); end++) {
            if (mp.count(s[end]) && mp[s[end]] >= start) {
                start = mp[s[end]] + 1;
            }
            mp[s[end]] = end;
            maxi = max(maxi, end - start + 1);
        }
        return maxi;
    }
};
