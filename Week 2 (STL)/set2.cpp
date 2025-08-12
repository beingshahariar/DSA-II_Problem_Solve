#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
  vector<int> v ={1,2,3,2,2,1,2,5,6};
  set<int> st;

  for (int i = 0; i < v.size(); i++)
  {
    if (st.count(v[i]))
    {
      cout<<"Duplicate Found."<<endl;
      break;
    }
    st.insert(v[i]);
  }
  


  return 0;
}