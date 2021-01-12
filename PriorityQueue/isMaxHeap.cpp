bool isMaxHeap(int arr[], int n)
{
   for(int i=0;(i*2)+2<=n;i++)
   {  
    if(arr[i]<arr[2*i+1] or arr[i]<arr[2*i+2] )
    {
        return false;
    }
    
   }
    return true;
    
}
