#include<bits/stdc++.h>
using namespace std;

void printSubSets(vector<int> & arr,vector<int>subset,int index)
{
  if (index ==arr.size())
  {
    cout<<"{";
    for(int num : subset)
    {
      cout<<num<<" ";
    }
    cout<<"}"<<endl;
    return;
  }

  subset.push_back(arr[index]);
  printSubSets(arr,subset,index+1);

  subset.pop_back();
  printSubSets(arr,subset,index+1);

  
}

int main()
{
  vector<int> set ={1,2,3};
  vector<int>subset;

  cout<<"All Subsets:";
  printSubSets(set,subset,0);
  return 0;
}