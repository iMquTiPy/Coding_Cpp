#include <string>
#include <unordered_map>
using namespace std;

string helper(int num)
{
     unordered_map<int,string> m;
    m[0]=" ";
    m[1]=" ";
    m[2]="abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxyz";
     return m[num];
}
int keypad(int num, string output[])
{   
  
     
    if(num==0 )
    {  output[0]=" ";
          return 1;
    }
    string num2=helper(num%10);
    for(int i=0;i<num2.size();i++)
    {
       keypad(num/10,num2[i]+output);
        
    }
    
    
}
