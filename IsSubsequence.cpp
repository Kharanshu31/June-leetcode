class Solution {
public:
  bool isSubsequence(string s, string t) {

//         Naive Approach

//         vector<long long>res;
//         int flag;
//         for(int i=0;i<s.length();i++)
//         {
//             flag=0;
//             for(int j=0;j<t.length();j++)
//             {
//                 if(s[i]==t[j])
//                 {
//                     flag=1; 
//                     if(i==0)
//                         res.push_back(j);
//                     else {
//                         if(j<=res[i-1])
//                             return false;
//                         else
//                             res.push_back(j);
//                     }
//                 }
//             }
//             if(flag==0)
//                 break;
//         }      
//         return true;
        
//         Best Solution
 
            int i=0, j=0;
            while(i<s.length() && j<t.length()){
             if(s[i]==t[j])
                 i++;
             j++;
            }
        return i==s.length();
        
    }
};
