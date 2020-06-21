class Solution {
public:
    
    string getPermutation(int N, int K) {
    
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
