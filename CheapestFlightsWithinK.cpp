  vector<vector<vector<int>>>adj(n);
        
        //example :
        //0 : {1, 100, 0}, {2, 500, 0}
        //1 : {2, 100, 0}
        //2 :
        
        
        for(auto f:flights)
        {
            adj[f[0]].push_back({f[1],f[2]});
        }
        
        queue<vector<int>>q;
        
        q.push({src, 0, -1});
        
        int minCost = INT_MAX;
        
        while(!q.empty())
        {
            vector<int>cur_station=q.front();
            q.pop();
            
            int cur_src=cur_station[0];                        
            int cur_cost=cur_station[1];
            int cur_steps=cur_station[2];
            
            if(cur_src==dst){
                min_cost=min(min_cost,cur_cost);
                continue;
            }
            
            for(auto p:adj[cur_src])
            {
                if(cur_steps+1<=k && cur_cost+p[1]<=min_cost)
                {
                    q.push({p[0],p[1]+cur_cost,cur_steps+1});
                }
            }

        }
        
         return minCost==INT_MAX?-1:minCost;
