#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string s)
{
  stack<char>st;

  for(char c:s)
  {
    if(c=='(' || c=='{' || c=='[')
    {
      st.push(c);
    }
    else
    {
      if(st.empty())
      return false;
      
      char top =st.top();
      st.pop();

      if((c==')' && top !='(') || (c=='}' && top!='{') || c==']' && top !='[')
      {
      return false;
      }
    }
  }
  return st.empty();
}


int main()
{
  int n;
  cout<<"Enter the input:";
  cin>>n;

  while (n--)
  {
    string s;
    cout<<"Enter input:";
    cin>>s;

    if(isBalanced(s))
    {
      cout<<"YES.\n";
    }
    else
    {
      cout<<"NO.\n";
    }
  }
  

  return 0;
}