#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

  vector<int> v= {1,2,3,2,5,6};

  sort(v.begin(),v.end());
  int n = v.size();

  cout<<"Second Largest:"<<v[n-2]<<endl;

  return 0;
}