class Solution {
public:
    int search(vector<int>& nums,int left, int right){
        int mid = left +(right - left)/2;
        if(right == left){
            return nums[left];
        }
            if(mid % 2 == 0){
                if(nums[mid+1]==nums[mid] && mid+1 <= right){
                    return search(nums,mid+2,right);
                }
                else{
                    return search(nums,left,mid);
                }    
            }else{
                if(nums[mid-1]==nums[mid] && mid - 1 >= left){
                    return search(nums,mid+1,right);
                }
                else{
                    return search(nums, left, mid-1);
                }
            }    
        return nums[mid];
    }
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        return search(nums,left,right);
        
    }
};
