#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &str,int start,int end)
{
  if(start>=end)
  return true;

   if (tolower(str[start]) != tolower(str[end]))
        return false;

  return isPalindrome(str,start+1,end-1);

}

int main()
{ string s;
 cout<<"String:";
 getline(cin,s);//to prevent space


 if(isPalindrome(s,0,s.length()-1))
 {
  cout<<"Palindrome.";
 }
 else
 {
  cout<<"Not Palindrome.";
 }
  return 0;
}