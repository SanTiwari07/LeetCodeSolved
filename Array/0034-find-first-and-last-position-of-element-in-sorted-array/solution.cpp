class Solution {
public:
    vector<int> search(vector<int>& nums, int left, int right, int target){
        if(left <= right){
            int mid = (left+right)/2;
            if(nums[mid]== target){
                int a = mid, b = mid;
                while(a-1>=0 && nums[a-1] == target){a--;}
                while(b+1 < nums.size() && nums[b+1] == target){b++;}
                return{a,b};
            }
            else if(nums[mid]>target) return search(nums,left,mid-1,target);
            else return search(nums,mid+1,right,target);
        }
        else{
            return{-1,-1};
        }
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       return search(nums,0,nums.size()-1,target); 
    }
};
