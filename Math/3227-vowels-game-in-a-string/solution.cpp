class Solution {
public:
    bool doesAliceWin(string s) {
        for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'u'|| c == 'o')
            return true;
    }
    return false;
    }
};
