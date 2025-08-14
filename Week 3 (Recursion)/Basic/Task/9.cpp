#include<bits/stdc++.h>
using namespace std;

void printSubsets(vector<int> & arr, int index, vector<int> & subset)
{
  if (index==arr.size())
  {
    cout<<"{";
    for(int num:subset)
       cout<<num<<" ";
    cout<<"}"<<endl;
    return;   
  }
  
  subset.push_back(arr[index]);
  printSubsets(arr,index+1,subset);

  subset.pop_back();
  printSubsets(arr,index+1,subset);
}


int main()
{
  vector<int> arr = {1,2,3};
  vector<int>subset;

  printSubsets(arr,0,subset);
  return 0;
}