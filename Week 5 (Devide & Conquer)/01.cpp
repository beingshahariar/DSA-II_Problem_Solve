#include<bits/stdc++.h>
using namespace std;

struct Result
{
  int vowelCount;
};


bool isVowel(char c)
{
  c= tolower(c);
  return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

Result countVowels(string &s ,int st, int e)
{
  if (st==e)
  {
    return Result {isVowel(s[st]) ? 1:0};
  }
  
int mid = (st+e)/2;
Result left = countVowels(s,st,mid);
Result right = countVowels(s,mid+1,e);

Result res;
res.vowelCount= left.vowelCount+right.vowelCount;
return res;

}

int main()
{
  string s;
  cin>>s;
  
  Result ans = countVowels(s,0,s.size()-1);
  cout<<"Total Vowel:"<<ans.vowelCount<<endl;

  return 0;
}