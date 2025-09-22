#include<bits/stdc++.h>

using namespace std;
int main()
{
 vector<int> v ={1,2,3,2,2,1,2,5,6};
 map<int,int> mp;

 for(int num: v)
 {
   mp[num]++;
 }

 for (auto it : mp)
 {
  cout << it.first<<"has appeared "<<it.second<<" time(s)"<<endl;
 }

  return 0;
}