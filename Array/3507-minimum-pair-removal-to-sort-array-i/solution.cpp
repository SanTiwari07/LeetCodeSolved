class Solution {
public:
    int descreaser_checker(vector<int>& nums) {
        int mini = INT_MAX;  
        int index = 0;

        for (int a = 0; a < nums.size() - 1; a++) {
            int sum = nums[a] + nums[a + 1];
            if (sum < mini) {  
                mini = sum;
                index = a;
            }
        }
        return index;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;

        if (is_sorted(nums.begin(), nums.end())) return 0;

        while (!is_sorted(nums.begin(), nums.end())) { 
            int a = descreaser_checker(nums);

            nums[a] = nums[a] + nums[a + 1];
            nums.erase(nums.begin() + a + 1);

            count++;
        }
        return count;
    }
};
