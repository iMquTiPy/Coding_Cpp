#include<queue>
int buyTicket (int *arr, int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    priority_queue <int> pq;
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
        q.push(i);
    }
    int time=0;
    while(true)
    {
        if(pq.top()==arr[q.front()] && q.front()==k)
        {
            time++;
            break;
        }

       else if(pq.top()==arr[q.front()])
        {
            time++;
            pq.pop();
            q.pop();
        }
        else 
        {
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
    }
    return time;
    
    
    
}
