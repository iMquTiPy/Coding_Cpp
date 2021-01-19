#include<iostream>
using namespace std;

#include<stack>
#include<algorithm>
#include<cmath>
#include<queue>
#include<unordered_map>
#include<vector>
#include<string>

#define MOD 1000000007

int helper(int arr[],int si,int ei)
{
    for(int i=0;i<2*n;i++)
    {
        if(arr[i]!=-1)
        {
            break;
        }
        if(i==(2*n)-1)
        {
            
        }
        
    }
    
}
int main()
{
int T;
cin>>T;

while(T>0)
  {
      int n;
      cin>>n;
      int arr[2*n];
      for(int i=0;i<2*n;i++)
      {
          cin<<arr[i];
      }
      sort(arr,arr+(2*n));
      cout<<helper(arr,0,(2*n)-1)<<endl;
   T--; 
  }
}
