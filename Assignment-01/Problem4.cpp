#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the input:";
  cin>>n;

  set<string> s;

  for (int i = 0; i < n; i++)
  {
    string name;
    cout<<"Enter the name:";
    cin>>name;
    
       if(s.count(name))
       {
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }
       s.insert(name);
  }
  

  return 0;
}