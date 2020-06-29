class Solution {
public:
    int numSquares(int n) {
        if(n<4)
            return n;
        int root=sqrt(n);
        vector<int>ar;
        for(int i=1;i<=root;i++)
            ar.push_back(i*i);
        
        int dp[ar.size()+1][n+1];
        dp[0][0]=INT_MAX-1;
        for (int i=1; i <= ar.size(); i++)
             dp[i][0] = 0;
        for (int i = 1; i <= n; i++)
            dp[0][i] = INT_MAX-1;
        
        for(int i=1,j=1;j<n+1;j++)
        {
            if(j%ar[0]==0)
                dp[i][j]=j/ar[0];
            else
                dp[i][j]=INT_MAX-1;
        }
        
        for(int i=1;i<=ar.size();i++)
        {
            for(int j=1;j<=n;j++)
            {
                dp[i][j]=dp[i-1][j];
                if(j-ar[i-1]>=0)
                    dp[i][j]=min(dp[i][j],dp[i][j-ar[i-1]]+1);
            }
        }
        
        return dp[ar.size()][n];
    }
};
