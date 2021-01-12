
#include<unordered_map>
using namespace std;

int length(int* arr,int size,int el)
{
    int count=0;
  for(int i=0;i<size;i++)
  {
      if(arr[i]==el)
      {
          count++;
      }    
  }
    bool flag=false;
    int len=0;
    for(int i=0;i<size;i++)
    {
        if(flag ==true)
        {
            len++;
        }
        if(arr[i]==el&&count>0)
        {
            flag=true;
            count--;
        }
        if(arr[i]==el&&count==0)
        {
            flag=false;
        }
        
    }
    return len;
}


int lengthOfLongestSubsetWithZeroSum(int* arr, int size){

// Write your code here
 unordered_map<int,int>m;
    if(size==1)
        return 1;
    int maxlen=0;
  for(int i=1;i<size;i++)
	{
	  arr[i]=arr[i]+arr[i-1];
     
	}
    for(int i=0;i<size;i++)
    {
      if(m[arr[i]]==0)
      {
        m[arr[i]]=1;
      }
      else
      {
        m[arr[i]]++;
        int len=length(arr,size,arr[i]);
            if(len>maxlen)
            {
                maxlen=len;
            }
      }
    }
    return maxlen;
    
}


