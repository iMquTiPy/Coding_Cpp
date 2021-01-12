int countZeros(int n) {
    // Write your code here
  if(n==0)
    return 0;
  
  int rem=n%10;
  if(rem==0)
    return 1+countZeros(n/10);
  else
    return countZeros(n/10);
  
}
