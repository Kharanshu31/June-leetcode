class Solution {
public:
    vector<string>ans;
    
    void DFS( unordered_map<string,vector<string> >&m,string src)
    {
        while(!m[src].empty())
        {
            string s=m[src].back();
            m[src].pop_back();
            DFS(m,s);
        }
        ans.push_back(src);
    }
    
    vector<string> findItinerary(vector<vector<string>>& tickets) {
    
         unordered_map<string,vector<string>> m;
        
        for(auto v:tickets)
        {
            m[v[0]].push_back(v[1]);    
        }
        
         for(auto &i:m)
            sort(i.second.begin(),i.second.end(),greater<string>());  
        
        DFS(m,"JFK");
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
