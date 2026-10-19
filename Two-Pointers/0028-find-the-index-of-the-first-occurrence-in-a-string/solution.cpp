class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int a = 0; a < haystack.length(); a++) {
            if (haystack[a] == needle[0]) {
                int b = 1;
                while (b < needle.length()) {
                    if (haystack[a + b] != needle[b]) {
                        break;
                    }
                    b++;
                }
                if (b == needle.length()){
                    return a;
                }
                    
            }
        }
    return -1;
    }
    
};
