class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int> number;
        while(i < m && j < n){
            if(nums1[i]>=nums2[j]){
                number.push_back(nums2[j++]);
            }
            else{
                number.push_back(nums1[i++]);
            }
        }
        while(i<m){
            number.push_back(nums1[i++]);
        }
        while(j<n){
            number.push_back(nums2[j++]);
        }
        nums1 = number;
    }
};
