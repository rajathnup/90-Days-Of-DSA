//link to the problem: https://practice.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/1/#

class Solution 
{
    public:
   //Function to find a solved Sudoku. 
   bool findEmptyLocation(int grid[N][N], int &row, int &col)
   {
       for(int i=0;i<N;i++)
       {
           for(int j=0;j<N;j++)
           {
               if(grid[i][j]==0)
               {
                   row=i;
                   col=j;
                   return true;
               }
           }
       }
       return false;
   }

 

bool isSafe(int k,int grid[N][N], int r, int c )
   {
       // check for row and column
       for(int i=0;i<N;i++)
       {
           if(grid[i][c]==k || grid[r][i]==k)
           return false;
       }
       // check for 3*3 box
       int rf= r-(r%3);
       int cf= c-(c%3);
       for(int i=0;i<3;i++)
       {
           for(int j=0;j<3;j++)
           {
               if(grid[i+rf][j+cf]==k)
               return false;
           }
       }
       return true;
}

 bool SolveSudoku(int grid[N][N])  
   { 
       // Your code here
      int row,col;
       if(!findEmptyLocation(grid,row,col))
       {
           return true;
       }
       
       for(int i=1;i<=9;i++)
       {
           if(isSafe(i,grid,row,col))
           {
               grid[row][col]=i;
               if(SolveSudoku(grid))
               {
                   return true;
               }
               grid[row][col]=0;
           }
       }
       
       return false;
       
   }

 void printGrid (int grid[N][N]) 
   {
       // Your code here
     
       for(int i=0;i<N;i++)
       {
           for(int j=0;j<N;j++)
           {
               cout<<grid[i][j]<<" ";
           }
           //cout<<endl;
       }
       
       
   }
};
