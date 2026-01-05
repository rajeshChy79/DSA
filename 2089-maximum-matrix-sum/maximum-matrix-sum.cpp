class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long totalSum = 0;
        int negCount = 0;
        int minAbs = INT_MAX;

        for (auto &row : matrix) {
            for (int val : row) {
                totalSum += abs(val);
                if (val < 0) negCount++;
                minAbs = min(minAbs, abs(val));
            }
        }

        if (negCount % 2 == 0)
            return totalSum;
        else
            return totalSum - 2LL * minAbs;
    }
};
