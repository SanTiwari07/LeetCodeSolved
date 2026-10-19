class Solution {
public:
    bool isPalindrome(const string &s, int start, int end) {
        // Compare front and back directly — safer and faster for large strings
        while (start < end) {
            if (s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        string longest = "";

        // Outer loop: choose start index
        for (int a = 0; a < n; a++) {
            // Inner loop: choose end index (must be >= a)
            for (int b = a; b < n; b++) {

                // Only check further if first and last match (small pruning)
                if (s[a] == s[b]) {

                    // Check if substring is palindrome
                    if (isPalindrome(s, a, b)) {

                        // Extract substring only when needed
                        string sub = s.substr(a, b - a + 1);

                        if (sub.size() > longest.size())
                            longest = sub;
                    }
                }
            }
        }

        return longest;
    }
};
