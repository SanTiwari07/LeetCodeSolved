class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        // Use set for suits
        set<char> unique_suits(suits.begin(), suits.end());
        if (unique_suits.size() == 1) return "Flush";

        // Use map for counting ranks
        unordered_map<int,int> rank_count;
        for (int r : ranks) {
            rank_count[r]++;
        }

        // Check for Three of a Kind
        for (auto& [rank, count] : rank_count) {
            if (count >= 3) return "Three of a Kind";
        }

        // Check for Pair
        for (auto& [rank, count] : rank_count) {
            if (count == 2) return "Pair";
        }

        return "High Card";
    }
};
