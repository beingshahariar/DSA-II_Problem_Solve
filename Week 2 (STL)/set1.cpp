#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{

  vector<int> v ={1,2,3,2,2,1,2,5,6};
  set <int> st;

  for (int i = 0; i < v.size(); i++)
  {
    st.insert(v[i]);
  }
  

  for(int x:st)
  {
    cout<<x<<" ";
  }
  cout<<endl;

  return 0;
}