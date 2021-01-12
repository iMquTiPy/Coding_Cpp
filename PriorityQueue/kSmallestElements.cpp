#include<queue>
vector<int> kSmallest(int arr[], int n, int k) 
{
   priority_queue <int> pq;
    pq.push(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(pq.size()==k)
        {
          if(pq.top()> arr[i])
          {
              pq.pop();
              pq.push(arr[i]);
          }
            
        }
            else pq.push(arr[i]);
        
    }
    vector<int> ans; 
    for(int i=k;i>0;i--)
    {
         ans.push_back(pq.top());
        pq.pop();
   
    }
    return ans;
}
