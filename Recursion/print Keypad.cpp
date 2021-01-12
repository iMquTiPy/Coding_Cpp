
void printKeypad(string decided ,int number) {

  string code[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  if(number==0)
  {
    cout<<decided <<endl;
    return;
  }
  int digit = number%10;
  int calls = code[digit].size();
  for(int i=0;i<calls;i++)
  printKeypad(code[digit][i]+decided,number/10);


}
void printKeypad(int number) {
	// Write your code here
  printKeypad("",number);
}



