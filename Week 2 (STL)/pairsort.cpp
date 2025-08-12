#include<bits/stdc++.h>
using namespace std;

bool comparator(pair<int,int> a, pair<int,int> b)
{
  if(a.first==b.first)
  {
    return a.first>b.first;
  }
  return a.first<b.first;
}

int main()
{
 vector<pair<int,int>> v ={{3,4},{1,2},{5,1},{2,3},{1,5}};
 sort(v.begin(),v.end(),comparator);

 for(auto it : v)
 {
  cout<<"("<<it.first<<","<<it.second<<")";
 }

  return 0;
}