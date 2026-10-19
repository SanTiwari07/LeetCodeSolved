class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> sample;
        int a = 0;
        while (a < words.size()) {
            vector<int> sample1(26, 0);
            for (char c : words[a]) sample1[c - 'a']++;

            sample.push_back(words[a]);

            // Skip consecutive anagrams
            int next = a + 1;
            while (next < words.size()) {
                vector<int> sample2(26, 0);
                for (char c : words[next]) sample2[c - 'a']++;

                if (sample1 == sample2)
                    next++; // skip anagrams
                else
                    break;
            }
            a = next;
        }
        return sample;
    }
};
