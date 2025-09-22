#include<iostream>
#include<deque>
#include<string>
using namespace std;

bool isPlaindrome(const string & str)
{
  deque<char> d;

  for(char c:str)
  {
    d.push_back(c);
  }

while (d.size()>1)
{
  if (d.front() != d.back())
  {
    return false;
  }
  d.pop_front();
  d.pop_back();
}
 return true;
}

int main()
{
 string s;
 cout<<"Enter a string:";
 cin>> s;

 if (isPlaindrome(s))
 {
  cout<<"Yes";
 }
 else
 {
  cout<<"No";
 }
 

  return 0;
}