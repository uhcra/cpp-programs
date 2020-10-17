#include<iostream>
using namespace std;
int frequency(character c, string s)    //function declaration
{
  int count_ch = 0;
  for(int i=0; i<s.length(); i++)
  {
    if(s[i] == ch)
    {
      count_ch++;
    }
  }
  return count_ch;
}

int main()
{
  string see;
  char ch;
  cout<<"Input the desired string: ";
  cin>> see;
  cout<<"Enter the character to be frequented: ";
  cin>>ch;
  int f = frequency(ch,see);          //function call
  
  cout<<ch <<"occurred "<<f<<"times in the inputted string.";
  return 0;
}
