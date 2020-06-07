class Solution {
public:
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size();
        // int a=0,b=0;
        int sum=0;
        //Initial Approach
        // for(int i=0;i<n;i++)
        // {
        //     if(costs[i][0]<=costs[i][1])
        //     {
        //         if(a<=n/2)
        //         {
        //             a++;
        //             sum+=costs[i][0];
        //         }
        //         else
        //         {
        //             b++;
        //             sum+=costs[i][1];
        //         }
        //     }
        //     else
        //     {
        //         if(b<=n/2)
        //         {
        //             b++;
        //             sum+=costs[i][1];
        //         }
        //         else
        //         {
        //             a++;
        //             sum+=costs[i][0];
        //         }
        //     }
        // }
        
        //2nd Approach after seeing the discussion
        
        auto cmp=[](vector<int>&left,vector<int>&right) {
            return (left[0]-left[1]) < (right[0]-right[1]);
        };
        sort(costs.begin(),costs.end(),cmp);
        for(int i=0;i<n/2;i++)
        {
            sum+=costs[i][0]+costs[i+n/2][1];
        }
        return sum;
    }
};
