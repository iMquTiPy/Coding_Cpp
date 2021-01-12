#include<queue>
vector<int> kLargest(int input[], int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
       priority_queue <int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++)
    {
          if(pq.size()==k)
        {
			if(pq.top()<input[i])
            { 
                pq.pop();
                pq.push(input[i]);
            }
        }
        else
        pq.push(input[i]);
      }
    vector<int> v;
    int j=k;
    while(j>0)
    {   
    v.push_back(pq.top());
    pq.pop();
        j--;
    }
    return v;

}
