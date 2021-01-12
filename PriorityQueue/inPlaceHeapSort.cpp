void swap(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}
void maxheap(int i,int arr[], int n)
{
    int max=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n and arr[l]<arr[max])
    {
       max=l;
    }
      if(r<n and arr[r]<arr[max])
    {
       max=r;
    }
      if (max != i) { 
        swap(arr[i], arr[max]); 
         maxheap(max,arr,n);
      }
    
}
void heapSort(int arr[], int n)
{ 
    int si=(n/2)-1;
    for(int i=si;i>=0;i--)
    {
        maxheap(i, arr , n);
    }
    for (int i = n-1; i>0; i--) {
       
        swap(arr[0], arr[i]);
        maxheap(0,arr,i );
    }
   
}
