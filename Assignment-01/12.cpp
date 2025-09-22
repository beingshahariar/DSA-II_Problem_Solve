#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  unordered_map<string,int> db;

  while (n--)
  {
    string name;
    cin>>name;

    if (db.find(name)==db.end())
    {
      cout<<"ok"<<endl;
      db[name] = 0;
    }
    else
    {
      db[name]++;
      cout<<name<<db[name]<<endl;
    }
  }
  

  return 0;
}