int countStepsToOne(int n)
{ 
   int s1,s2=INT_MAX,s3=INT_MAX;
    if(n==1)
    {
        return 0;
    }
    
   
      s1= countStepsToOne(n-1);
   
     if(n%3==0 )
    {
      
        s2=countStepsToOne(n/3);
    }
    
    if(n%2==0  )
    {
      
        s3=countStepsToOne(n/2);
    }
  
    return 1+min(s1, min(s2,s3));
//Write your code here
}
