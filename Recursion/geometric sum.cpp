double geometricSum(int k) {
    // Write your code here
  if(k==0)
    return 1;
  double gSum= 1/pow(2,k) + geometricSum(k-1) ;
  return gSum;

}


