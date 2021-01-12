#include<queue>

void balanced ( priority_queue<int> maxm, priority_queue<int,vector<int>,greater<int>> minm)
{
   
    
}

void findMedian(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */
    priority_queue<int> maxm; // small numbers
    priority_queue<int,vector<int>,greater<int>> minm; //big numbers

    for(int i=0;i<n;i++)
    {
        if(maxm.empty())
        {
          maxm.push(arr[i]);
        }
       else if(arr[i]>maxm.top())
        {
            minm.push(arr[i]);
        }
        else
        {
            maxm.push(arr[i]);
        }
        
        
        //balancing
         
    if(maxm.size()>minm.size())
    {
    	while(maxm.size()-minm.size()>1)
   		 { int temp=maxm.top();
   		     minm.push(temp);
  		     maxm.pop();
		 }
    } 
    if(maxm.size()<minm.size())
    {
    	while(minm.size()-maxm.size()>1)
   		 {
   		    int temp=minm.top();
            maxm.push(temp);
  		     minm.pop();
		 }
    }
        
        if(maxm.size()==minm.size())
        {
           cout<< (maxm.top()+minm.top())/2 <<endl;
        }
        else if(maxm.size()<minm.size())
        {
            cout<<minm.top()<<endl;
        }
        else 
        {
            cout<<maxm.top()<<endl;
        }
        
    }

}
