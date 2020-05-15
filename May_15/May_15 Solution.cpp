class Solution {
public:
    int maxSubarraySumCircular(const vector<int>& A) {
        int m = *max_element(A.begin(), A.end());
        if (m <= 0) return m;
        int sofar = 0;
        int res = 0;
        for (int i = 0; i < (int)A.size(); ++i) {
            sofar = max(0, A[i] + sofar);
            res = max(sofar, res);
        }
        int nag = 0;
        for (int i = 0; i < (int)A.size(); ++i) {
            sofar = min(0, A[i] + sofar);
            nag = min(sofar, nag);
        }
        int sum = accumulate(A.begin(), A.end(), 0);
        return max(res, sum - nag);
    }
};
