class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
                    
        vector<vector<int>>temp=people;
        sort(people.begin(),people.end(),[](vector<int>& a,vector<int>& b){
            if(a[0]!=b[0])
                return a[0]>b[0];
            else
                return a[1]<b[1];
        });
        
        for(int i=0;i<people.size();i++)
        {
            auto p = people[i];
            if(people[i][1]!=i)
            {
                people.erase(people.begin() + i);
                // people.insert(people[i].begin()+people[i][1],people[i]);
                 people.insert(people.begin() + p[1], p);
            }
        }
        
        return people;
    }
};
