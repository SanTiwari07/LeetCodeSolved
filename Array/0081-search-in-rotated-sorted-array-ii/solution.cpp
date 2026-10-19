class Solution {
public:
    bool binarysearch(vector<int>& nums, int left, int right, int target) {
        if (left > right) return false;

        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return true;
//bro down wala is special case if left = right = mid then the code will fail so i wrote this
        if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
            return binarysearch(nums, left+1, right-1, target);
        }

        if (nums[left] <= nums[mid]) {
            if (nums[left] <= target && target < nums[mid]) {
                return binarysearch(nums, left, mid-1, target);
            } else {
                return binarysearch(nums, mid+1, right, target);
            }
        } 

        else {
            if (nums[mid] < target && target <= nums[right]) {
                return binarysearch(nums, mid+1, right, target);
            } else {
                return binarysearch(nums, left, mid-1, target);
            }
        }
    }

    bool search(vector<int>& nums, int target) {
        return binarysearch(nums, 0, nums.size()-1, target);
    }
};
