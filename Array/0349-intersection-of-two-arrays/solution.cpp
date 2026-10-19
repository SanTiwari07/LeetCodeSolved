class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> intersect;
    for (int x : nums2) {
        if (s1.count(x)) intersect.insert(x);
    }
    return vector<int>(intersect.begin(), intersect.end());
}

};
