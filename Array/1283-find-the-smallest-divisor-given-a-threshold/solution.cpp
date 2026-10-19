// Problem: Find the smallest divisor so that sum of ceil(nums[i]/divisor) <= threshold
// Approach:
// - Binary search on divisor: low = 1, high = max(nums)
// - For mid divisor, compute s = sum of ceil(nums[i]/mid) using integer trick: (x + mid - 1)/mid
// - If s > threshold, need bigger divisor → low = mid + 1
// - Else, try smaller divisor → high = mid
// - Return low when low == high
// Key idea: sum decreases as divisor increases → monotonic → binary search works
// Time Complexity: O(n * log(max(nums)))
// Space Complexity: O(1) iterative / O(log(max(nums))) recursive

class Solution {
public:
    int answer(vector<int>& nums, int threshold, int low, int high) {
        if (low == high) return low;

        int mid = low + (high - low) / 2;
        int s = 0;
        for (int x : nums) {
            s += (x + mid - 1) / mid;  // ceil division
        }

        if (s > threshold) {
            return answer(nums, threshold, mid + 1, high);
        } else {
            return answer(nums, threshold, low, mid);
        }
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxVal = *max_element(nums.begin(), nums.end());
        return answer(nums, threshold, 1, maxVal);
    }
};
