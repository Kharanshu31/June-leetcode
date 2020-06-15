class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
//         int n=ar.size();
//         if(n==1)
//             return ar;
//         vector<int>res;
//         vector<bool>visited;
//         sort(ar.begin(),ar.end());
//         for(int i=0;i<n;i++)
//         {
//             //memset(temp,0,sizeof(temp));
//             vector<int>temp;
//             vector<bool>visited(n,0);
//             for(int j=i;j<n-1;j++)
//             {
//                 if(ar[j+1] % ar[j]==0)
//                 {
//                     temp.push_back(ar[j+1]);
//                     if(!visited[j])
//                         temp.push_back(ar[j]);
                    
//                     visited[j]=true;
//                     visited[j+1]=true;
                        
//                 }
             
//             }
//             if(temp.size()>res.size())
//                 res=temp;
//         }
//         if(res.size()==0)
//         {
//             res.push_back(res[0]);
//             return res;
//         }
//         return res;
        
        if(nums.size()==0){
            return nums;
        }
        sort(nums.begin(),nums.end());
        int flag=1;
        if(nums[0]==1){
            flag=0;
        }
        else{
            nums.push_back(1);
            flag=1;
        }
        sort(nums.begin(),nums.end());
        int i,j;
        int dp[nums.size()][2];
        for(i=nums.size()-1;i>=0;i--){
            dp[i][0]=0;
            dp[i][1]=i;
            for(j=i+1;j<nums.size();j++){
                if((nums[j]%nums[i])==0){
                    if(dp[j][0]>dp[i][0]){
                        dp[i][0]=dp[j][0];
                        dp[i][1]=j;
                    }  
                }
            }
            dp[i][0]++;
        }
        i=0;
        vector<int> t;
        t.push_back(nums[i]);
        while(dp[i][1]!=i){
            i=dp[i][1];
            t.push_back(nums[i]);
            
        }
        if(flag==1){
            t.erase(t.begin());
        }
        return t;
           
    }
};
