#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s,int start,int end)
{
  if(start>=end)
  return true;

  if(s[start]!=s[end])
  return false;

  return isPalindrome(s,start+1,end-1);

}


int main()
{
 string s;
 cout<<"Enter the string:";
 getline(cin,s);

 if (isPalindrome(s,0,s.length()-1))
 {
  cout<<"Palindrome.";
 }
 else
 {
  cout<<"Not Palindrome.";
 }

  return 0;
}