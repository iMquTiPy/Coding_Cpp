using namespace std;

int helper(int arr[],int n,int si,int dp[])
{
    if(si>=n)
    {
        return 0;
    }
    if(dp[si]!=-1)
    {
        return dp[si];
    }
    
    int o1=arr[si] + helper(arr,n,si+2,dp);
    int o2= helper(arr,n,si+1,dp);
    dp[si]=max(o1,o2);
    return dp[si];
    
}
int getMaxMoney(int arr[], int n){

	/*Write your code here.
	 *Don’t write main(). 
	 *Don’t take input, it is passed as function argument.
	 *Don’t print output.
	 *Taking input and printing output is handled automatically.
         */ 
   int dp[n];
    for(int i=0;i<n;i++)
    {
        dp[i]=-1;
	}
    return helper(arr,n,0,dp);

}
