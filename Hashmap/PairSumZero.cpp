#include<unordered_map>
void pairSum(int *input, int n) 
{
    //Write your code here	 
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        if(m.count(input[i])==0)
        {
            m[input[i]]=1;
        }
        else
        {
            m[input[i]]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(input[i]==0&&m[input[i]]>1)
        {
            int n=m[input[i]];
            int p=m[-input[i]];
            
            for(int a=0;a<n;a++)
            {
                for(int b=2;b<p;b++)
                {
                    if(input[i]>-input[i])
                    {
                      cout<<-input[i]<<" "<<input[i]<<endl;
                    }
                    else
                    {
                      cout<<input[i]<<" "<<-input[i]<<endl;      
                    }
                }
            }
            m[input[i]]=0;
        }
        if(m[-input[i]]>0)
        {
            int n=m[input[i]];
            int p=m[-input[i]];
            
            for(int a=0;a<n;a++)
            {
                for(int b=0;b<p;b++)
                {
                    if(input[i]>-input[i])
                    {
                      cout<<-input[i]<<" "<<input[i]<<endl;
                    }
                    else
                    {
                      cout<<input[i]<<" "<<-input[i]<<endl;      
                    }
                }
            }
           m[input[i]]=0;
            m[-input[i]]=0;
        }
    }
}
