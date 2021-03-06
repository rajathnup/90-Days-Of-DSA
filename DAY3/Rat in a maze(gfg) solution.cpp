//link to the question:
//https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#

//SOLUTION:

class Solution{

    public:
    
    void checkpath(int i,int j,int n,vector<vector<int>> &m,string s,vector<string>&res)
    
   {
   
       if(issafe(i,j,n,m)==true){
       
           if(i==n-1 && j==n-1)
           
       {
       
           res.push_back(s);
           
           return ;
           
       }
       
       m[i][j]=0;
       
       checkpath(i+1,j,n,m,s+"D",res);
       
       checkpath(i,j-1,n,m,s+"L",res);
       
       checkpath(i,j+1,n,m,s+"R",res);
       
       checkpath(i-1,j,n,m,s+"U",res);
       
       m[i][j]=1;
       
       }
       
       return ;
       
   }
   
   bool issafe(int i,int j,int n,vector<vector<int>> &m)
    
   {
    
       if(i<0 || i>=n || j<0 || j>=n || m[i][j]==0)
    
       {
    
           return false;
    
       }
    
       else
    
       {
    
           return true;
    
       }
    
   }
    
   vector<string> findPath(vector<vector<int>> &m, int n) {
    
       string ans="";
    
       vector<string>res;
    
       checkpath(0,0,n,m,ans,res);
    
       sort(res.begin(),res.end());
    
       return res;
    
   }
    
};
