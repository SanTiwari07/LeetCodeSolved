class Solution {
public:
    unordered_set<string> mainSet; // fast visited check

    string findLexSmallestString(string s, int a, int b) {
        // base case: stop recursion if string already visited
        if (mainSet.count(s)) return s;
        mainSet.insert(s);

        string smallest = s;
        int size = s.size();

        // 1️⃣ add 'a' to odd indices
        string temp = s;
        for (int i = 1; i < size; i += 2) {
            int x = temp[i] - '0';
            x = (x + a) % 10;
            temp[i] = x + '0';
        }

        // recursive call after addition
        string addedResult = findLexSmallestString(temp, a, b);
        if (addedResult < smallest)
            smallest = addedResult;

        // 2️⃣ rotate by b
        string sample = "";
        for (int i = b; i < b + size; i++) {
            sample += s[i % size];
        }

        // recursive call after rotation
        string rotatedResult = findLexSmallestString(sample, a, b);
        if (rotatedResult < smallest)
            smallest = rotatedResult;

        return smallest;
    }
};
