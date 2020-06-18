class Solution {
public:
    
    
    void DFS2(vector<vector<char>>& board,int s,int l,int n)
    {
        if(s<0 || l<0 || s>=n || l>=n || board[s][l]=='X')
            return ;
        
        if(board[s][l]=='#')
            return;
        
        board[s][l]='#';
        DFS2(board,s+1,l,n);
        DFS2(board,s-1,l,n);
        DFS2(board,s,l+1,n);
        DFS2(board,s,l-1,n);

    }
    
    void DFS(vector<vector<char>>& board, int i, int j, int m, int n) {
        if(i<0 or j<0 or i>=m or j>=n or board[i][j] != 'O') return;
        board[i][j] = '#';
        DFS(board, i-1, j, m, n);
        DFS(board, i+1, j, m, n);
        DFS(board, i, j-1, m, n);
        DFS(board, i, j+1, m, n);
    }
    
    void solve(vector<vector<char>>& board) {
        
        int x=board.size();
        
       // for(int i=0;i<n;i++)
       // {
       //     for(int j=0;j<ar[i].size();j++)
       //     {
       //       if(ar[i][j]=='O')
//                  {
//                     if(i==0 || j==0 || i==n-1 || j==n-1)
//                         continue;                   
//                     else if(ar[i+1][j]=='O')
//                     {
//                         if(i+1==n-1)
//                             continue;
//                     }
//                     else if(ar[i][j-1]=='O')
//                     {
//                         if(j-1==0 )
//                             continue;
//                     }
//                     else if(ar[i-1][j]=='O')
//                     {
//                         if(i-1==0)
//                             continue;
//                     }
//                     else if(ar[i][j+1]=='O')
//                     {
//                         if(j+1==n-1 )
//                             continue;
//                     }
//                     else {
//                         ar[i][j]='X';
//                     }
//                 }
//             }
//       `` }
        
//         for(int i=0;i<x;i++)
//         {
//            for(int j=0;j<board[i].size();j++)
//            {
//              if(i==0 || j==0 || i==x-1 || j==x-1)
//              {
//                  if(board[i][j]=='O')
//                  {
//                     DFS2(board,i,j,x);            
//                  }   
//              }
               
//            }
//         }
        
         int m = board.size();
        
      if(m == 0) return;  
        
     int n = board[0].size();
     
     //Moving over firts and last column   
     for(int i=0; i<m; i++) {
         if(board[i][0] == 'O')
             DFS(board, i, 0, m, n);
         if(board[i][n-1] == 'O')
             DFS(board, i, n-1, m, n);
     }
        
        
     //Moving over first and last row   
     for(int j=0; j<n; j++) {
         if(board[0][j] == 'O')
             DFS(board, 0, j, m, n);
         if(board[m-1][j] == 'O')
             DFS(board, m-1, j, m, n);
     }
        
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {
            
               if(board[i][j]=='O')
                   board[i][j]='X';
               if(board[i][j]=='#')
                   board[i][j]='O';
               
           }
        }
        
        
    }
};
