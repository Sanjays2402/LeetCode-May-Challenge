class Solution {
public:
	int maxUncrossedLines(vector<int>& A, vector<int>& B) {
		int n=A.size(), m=B.size();
		auto dp=vector<vector<int>>(n+1,vector<int>(m+1,0));
		A.insert(A.begin(),0);
		B.insert(B.begin(),0);
		for(int i=1;i<n+1;i++){
			for(int j=1;j<m+1;j++){
				if(A[i]==B[j]){
					dp[i][j]=dp[i-1][j-1]+1;
				}
				else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		return dp[n][m];
	}
};
