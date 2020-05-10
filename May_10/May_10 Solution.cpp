class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if( N == 1 && trust.empty())
            return N;
        
        int n = trust.size();
        vector<int> nums(N+1 , 0);
        
        for(int i = 0;i<n;i++)
        {
            nums[trust[i][0]]--;
            nums[trust[i][1]]++;
        }
        
        for(int i = 0 ; i<= N ;i++)
        {
            if( nums[i] == N-1)
                return i;
        }
        return -1;
    }
};
