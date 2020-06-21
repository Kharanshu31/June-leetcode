class Solution {
public:
    int hIndex(vector<int>& citations) {
       
        int n = citations.size(), cnt = 0;
        sort(citations.begin(), citations.end());
        for (int i=n-1; i>=0; --i) {
            ++cnt;
            if (citations[i] < cnt)
                return cnt-1;
        }
        return cnt;
        
        return 0;
    }
};
