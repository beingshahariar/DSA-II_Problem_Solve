#include<bits/stdc++.h>
using namespace std;

void printSubSets(string & arr,string subset,int index)
{
  if (index ==arr.size())
  {
    cout<<subset<<endl;
    return;
  }

  subset.push_back(arr[index]);
  printSubSets(arr,subset,index+1);

  subset.pop_back();
  printSubSets(arr,subset,index+1);

  
}

int main()
{
  string s="abc";

  cout<<"All Subsets:\n";
  string subset="";
  printSubSets(s,subset,0);
  return 0;
}