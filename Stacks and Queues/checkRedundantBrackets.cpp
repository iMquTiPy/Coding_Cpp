#include<stack>
using namespace std;
bool checkRedundantBrackets(char *input) {
	// Write your code here
  stack<char> s;
  int count=0;
  
  while(*input!='\0')
  {
    s.push(*input);
    if(s.top()==')')
    {  
      s.pop(); 
     while(true)
     { 

       
       if(count==0 && s.top()=='(')
         return true;
       s.pop();

       
       count+=1;
       if(s.top()=='(')
       { 
         s.pop();
         break;
       }
     }

    }
    count=0;
    input+=1;

    }
    return false;
  }

 
