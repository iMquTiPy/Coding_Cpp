int merge(int input[],int size,int si,int mid,int ei,int output[])
{  
    int right=ei-mid;
    int left=mid+1-si;
   int output2[right];
    for(int i=0;i<left;i++)
    {
        output[i]=input[si+i];
    }
    for(int j=0;j<right;j++)
    {
        output2[j]=input[mid+1+j];
    }
    int k=si;
    int i=0;int j=0;
    while(i<left && j<right)
    {
        if(output[i]<=output2[j])
        {
            input[k]=output[i];
            i++;
        }
        else {
            input[k]=output2[j];
        j++;
    }
    k++;
    }
    while(i<left)
    {
        input[k]=output[i];
        i++;
        k++;
    }
      while(j<right)
    {
        input[k]=output2[j];
        j++;
        k++;
    }
    
    
}
int helper(int input[],int size,int si,int ei,int output[])
{
    if(size==0)
    {
        return 0;
    }
 if(size<0)
 {
     return 0;
 }
  int mid=(ei+si)/2;
    if(si<ei)
    {
        
        helper(input,size/2,si,mid,output);
        helper(input,size/2,mid+1,ei,output);
        merge(input,size,si,mid,ei,output);
    }
    
    
}
void mergeSort(int input[], int size)
{  int si=0;
   int ei=size-1;
	int output[size];
  helper(input,size,0,ei,output);
    
}
