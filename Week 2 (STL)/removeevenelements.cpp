#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> v ={1,2,3,2,5,6};
  vector<int> result;

  for(int num:v)
  {
    if (num%2 !=0)
    {
      result.push_back(num);
    }
    
  }

  for (int i = 0; i < result.size(); i++)
  {
    cout<<result[i]<<" ";
  }
  cout<<endl;

  return 0;
}