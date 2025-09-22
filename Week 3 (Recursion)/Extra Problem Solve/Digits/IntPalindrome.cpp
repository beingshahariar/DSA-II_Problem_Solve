#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s, int start, int end)
{
  if (start>=end)
    return true;

  if (s[start] !=s[end])
    return false;

  return isPalindrome(s,start+1,end-1);
  
  
}

int main()
{
  int num;
  cout<<"Enter the integer:";
  cin>>num;

  string s = to_string(num);

  if(isPalindrome(s,0,s.length()-1))
  {
    cout<<"Palindrome."<<endl;
  }
  else
  {
    cout<<"Not Palindrome."<<endl;
  }
  return 0;
}