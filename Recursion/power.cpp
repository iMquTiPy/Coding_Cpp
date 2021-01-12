int power(int x, int n) 
{ if(n==0)
 {
   return 1;   
 }
  if(n==1)
  {
      return x;
  }
    int ans=x*power(x,n-1);
    return ans;
}
