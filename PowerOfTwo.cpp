class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        if(n<=2)
            return true;
        bool flag=true;
        while(n/2!=0)
        {
            if(n%2!=0)
            {
                flag=false;
                break;
            }
            
            n=n/2;
            
        }
        
        return flag;
        
    }
};
