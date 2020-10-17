// defining and including class in the same file

#include<iostream>
using namespace std;
class Novel
{
  string genre;
  int pages;
  string author;
  bool trilogy;
  
  Novel()
  {
    genre = "undefined";
    pages = 0;
    author = "undefined";
    trilogy = false;
  }
  
  int setDetails(string g, int p, string a, bool t)
  {
    genre = g;
    pages = p;
    author = a;
    trilogy = t;
  }
};

int main(){
  Novel TheValleyOfFear("Detective Fiction",394,"Arthur Conan Doyle",false);
  //created an object with the above attributes
  
  return 0;
}
