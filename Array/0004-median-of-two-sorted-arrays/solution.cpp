class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int number = nums1.size()+nums2.size();
        vector<int>sample;
        while(i <nums1.size() && j <nums2.size()){
            if(nums1[i] < nums2[j]){
                sample.push_back(nums1[i]);
                i++;
            }else{
                sample.push_back(nums2[j]);
                j++;
            }
        }
        while(i <nums1.size()){
            sample.push_back(nums1[i]);
            i++;
        }
        while(j <nums2.size()){
            sample.push_back(nums2[j]);
            j++;
        }
        if (number % 2 == 1) {
            return sample[number / 2]; 
        }
            return (sample[number / 2 - 1] + sample[number / 2]) / 2.0;
        
    }
};
