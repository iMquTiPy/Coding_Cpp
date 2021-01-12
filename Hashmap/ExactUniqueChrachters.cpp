#include<unordered_map>

char* uniqueChar(char *str){
    // Write your code here
   unordered_map<char,int> m;
    int len=0;
    for(int i=0;str[i]!=0;i++)
    {
        len++;
    }
    char arr[len];
    int si=0;
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(m[str[i]]==0)
        {
            m[str[i]]=1;
            arr[si]=str[i];
            
            si++;
        }
    }
    return arr;
}
