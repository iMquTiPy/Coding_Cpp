
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int output[101][101];

int minCostPath2(int **input, int m, int n)
{     int i=m,j=n; 

 if(output[i][j]!=-1)
 {
   return output[i][j];
 }
 if(i<0 or j<0)
     {
       return INT_MAX;
     }
   
    
   if(i==0 and j==0)
    {
       output[i][j]=input[i][j];
       return input[i][j];
       
    }
 
     output[i][j]=input[i][j]+min(minCostPath2(input,i-1,j),
                                  min(minCostPath2(input,i,j-1),minCostPath2(input,i-1,j-1)));
 
  return output[i][j];   
}


int minCostPath(int **input, int m, int n)
{  for(int i=0;i<m;i++)
  {
     for(int j=0;j<n;j++)
     {
         output[i][j]=-1;
     }
  }

 return minCostPath(input,m-1,n-1);
    
}

