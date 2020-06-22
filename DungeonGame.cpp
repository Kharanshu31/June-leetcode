class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int r=dungeon.size();
        if(r==0)
            return 0;
        int c=dungeon[0].size();
        vector<vector<int>>dp(r+1,vector<int>(c+1,INT_MAX));
        dp[r][c-1]=1;
        dp[r-1][c]=1;

        for(int i=r-1;i>=0;i--)
        {
            for(int j=c-1;j>=0;j--)
            {        
                int x=min(dp[i+1][j],dp[i][j+1]);
                
                if(dungeon[i][j]>0)
                {
                    if(x-dungeon[i][j]>0)
                        dp[i][j]=x-dungeon[i][j];
                    else
                        dp[i][j]=1;
                }
                else {
                    int y=abs(dungeon[i][j]);
                    dp[i][j]=x+y;
                }
                
            }
        }
        
        return dp[0][0];
        
    }
};
