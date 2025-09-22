#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b)
{
if (a.size()!=b.size())
{
  return false;
}
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  return a==b;
}


int main()
{
 vector<pair<string,string>> V ={
  {"listen","silent"},
  {"door","road"}
 };

 for(auto it:V)
 {
   if(isAnagram(it.first,it.second))
   {
    cout<<"Anagram."<<endl;
   }
   else
   {
    cout<<"Not Anagram"<<endl;
   }

 }

  return 0;
}