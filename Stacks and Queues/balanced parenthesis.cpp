#include<stack>
using namespace std;
bool checkBalanced(char *exp) {
	// Write your code here
  
 stack<char> s;
 
  while(*exp != '\0')
  {
    if(*exp=='(')
      s.push('(');
      else if(*exp=='{')
      s.push('{');
     else if(*exp=='[')
      s.push('[');
        
      if(*exp==')')
      {
        if(s.size()==0)
        return false; 
        else if(s.top()=='(')
          s.pop();
        else 
          return false;
      }
     else if(*exp=='}')
      {
        if(s.size()==0)
        return false; 
        else if(s.top()=='{')
          s.pop();
        else 
          return false;
      }
      else if(*exp==']' && s.size() != 0)
      {
        if(s.top()=='[')
          s.pop();
        else 
          return false;
      }
    
     exp+=1;

   
  }
      if(s.size()==0)
        return true;
      return false;
}
