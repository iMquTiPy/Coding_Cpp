bool checkPalindrome(char input[]) {
  
    // Write your code here

  if(input[0]=='\0')
  return true;
 int size=0,i;
  
  while(input[size]!='\0')
  {
    size+=1;
  }
    
  for( i=0;i<size/2;i++)
    {
     if(input[i]==input[size-i-1])
       continue;
    
  else
    return false;
  }return true;
}


