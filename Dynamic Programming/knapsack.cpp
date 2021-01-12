#include <iostream>
using namespace std;
int knapsack(int* weights, int* values, int n, int maxWeight){

	/* Don't write main().
	*  Don't read input, it is passed as function argument.
	*  Return output and don't print it.
	*  Taking input and printing output is handled automatically.
	*/

	//write your code here
    if(n<=0)
    {
    return 0;    
    }
    if(maxWeight<0)
    {
        return -values[n];
    }
    int o1= values[n-1]+knapsack(weights,values,n-1,maxWeight-weights[n-1]);
    int o2=knapsack(weights,values,n-1,maxWeight);
    
    return max(o1,o2);
}

