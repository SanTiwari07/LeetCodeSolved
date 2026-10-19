class Solution {
public:
    void merge(vector<int>& nums, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<int> arr1(n1);
        vector<int> arr2(n2);

        for (int a = 0; a < n1; a++)
            arr1[a] = nums[left + a];
        for (int a = 0; a < n2; a++)
            arr2[a] = nums[mid + 1 + a];

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (arr1[i] <= arr2[j]) nums[k++] = arr1[i++];
            else nums[k++] = arr2[j++];
        }
        while (i < n1) nums[k++] = arr1[i++];
        while (j < n2) nums[k++] = arr2[j++];
    }

    void mergeSort(vector<int>& nums, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(nums, left, mid);
            mergeSort(nums, mid + 1, right);
            merge(nums, left, mid, right);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
