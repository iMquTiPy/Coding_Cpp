long helper(int n, long output[])
{
    if(output[n]!=-1)
  {
   return output[n]; 
  }
 
    if(n==1 || n==0)
  {
     return 1;
  }
  if(n==2)
  {
      return 2;
  }
 output[n]= helper(n-1,output)+helper(n-2,output)+helper(n-3,output);
    return output[n];
}


long staircase(int n)
{
  long output[n+1];
    for(int i=0;i<=n;i++)
    {
        output[i]=-1;
    }
  return helper(n,output);
    }
