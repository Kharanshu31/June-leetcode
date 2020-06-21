class Solution {
public:
    
    string getPermutation(int N, int K) {
        
//         int x,y;
//         vector<int>fact = {1,1,2,6,24,120,720,5040,40320,362880};
       
//         vector<int> num(n);
        
//         for(int i=0; i<n; i++)
//             num[i] = i+1;
        
//         string s="";
//         while(n>=0)
//         {
//             x=k/fact[n-1];
//             y=k%fact[n-1];
            
//             s+=(num[x]+'0');
//             num.erase(num.begin()+x);
            
//             n--;
//             k=y;
//         }
        
//         return s;
    
        int n = N-1, k = K-1, nt, kt;
        
        vector<int>fact = {1,1,2,6,24,120,720,5040,40320,362880};
        vector<int> num(N);
        for(int i=0; i<N; i++)
            num[i] = i+1;
        vector<int>::iterator it; 
        
        string ans = "";
        
        while(n>=0)
        {
            nt = k/fact[n];
            kt = k%fact[n];

            ans += (num[nt]+'0');
            it = num.begin(); 
            num.erase(it+nt);
            n--;
            k = kt;   
        }

        return ans;
    }

};
