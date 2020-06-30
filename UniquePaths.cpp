class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1 || n==1)
            return 1;
        
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        dp[1][1]=1;
        // for(int i=0;i<=n;i++)
        //     dp[i][0]=0;
        // for(int j=0;j<=m;j++)
        //     dp[0][j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(i==1 && j==1)
                    continue;
                
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        
        return dp[n][m];
    }
};
