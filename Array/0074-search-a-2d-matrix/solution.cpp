class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        if (rows == 0 || matrix[0].empty()) return false;

        int cols = matrix[0].size();

        int left = 0;
        int right = rows * cols - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int point = mid / cols;
            int index = mid % cols;

            if (matrix[point][index] < target) left = mid + 1;
            else if (matrix[point][index] > target) right = mid - 1;
            else return true;
        }

        return false;
    }
};
