#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str, int start,int end)
{
  if(start>=end)
  return;

  swap(str[start],str[end]);
  reverseString(str,start+1,end-1);
}

int main()
{
 string s;
 cout<<"String:";
 cin>>s;

 reverseString(s,0,s.length()-1);
 cout<<"Reverse String:"<<s;
  return 0;
}