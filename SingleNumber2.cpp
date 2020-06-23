class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
//         int maxi=*max_element(nums.begin(),nums.end());
//         vector<int>hash(maxi+1,0);
//         for(int i=0;i<nums.size();i++)
//         {
//             hash[abs(nums[i])]++;
//         }
        
//         for(int i=0;i<maxi+1;i++)
//         {
//             if(hash[i]>0 && hash[i]!=3)
//                 return i;
//         }
        
//         return 0;
         sort(nums.begin(),nums.end());
        int i, l = nums.size(), result=0;
        for(i=0;i<l;){
            if(i==l-1){
                result = nums[i];
                break;
            }
            else if(nums[i] == nums[i+1] && i+3<=l){
                i+=3;
            }
            else{
                result = nums[i];
                break;
            }
        }
        return result;

    }
};
