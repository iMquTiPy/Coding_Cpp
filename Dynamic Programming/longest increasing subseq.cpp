using namespace std;

 int lis(int arr[], int n)
 {
    int ans;
  
	int *output= new int[n];
     output[0]=1;
    	
     for(int i=1;i<n;i++)
     {   output[i]=1;
         for(int j=i-1;j>=0;j--)
         
         { if(arr[j]>=arr[i])
             {
                continue;        
             } 
             ans=output[j]+1;
              if(output[i]<ans)
               {
                 output[i]=ans;
                  
               }
         } 
         
     }
     int max=0;
     for(int i=0;i<n;i++)
     {
         if(max<output[i])
         {
             max=output[i];
         }
     } 
     delete []output;
     return max;
  
 
 }
