#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int> v = {1,3,4,7,9};
 int target = 5;

if(binary_search(v.begin(),v.end(),target))
{
  cout<<target<<" Found"<<endl;
}
else
{
  cout<<target<<" Not Found"<<endl;
}

  return 0;
}