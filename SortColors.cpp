class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>hash(3);
        
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        
        int index=0;
        int num_index=0;
        while(hash[0]!=0)
        {
            hash[0]--;
            nums[index++]=0;
        }
        
        while(hash[1]!=0)
        {
            hash[1]--;
            nums[index++]=1;
        }
        
         while(hash[2]!=0)
        {
            hash[2]--;
            nums[index++]=2;
        }
    }
};
