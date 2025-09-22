#include<bits/stdc++.h>
using namespace std;

void printSubSets (vector <int> &arr ,vector<int>subset, int index)
{
  if(index == arr.size())
  {
    for(int num : subset)
    {
      cout<<num<<" ";
    }
    cout<<endl;
    return;
  }

  subset.push_back(arr[index]);
  printSubSets(arr,subset,index+1);

  subset.pop_back();
  printSubSets(arr,subset,index+1);
}

int main()
{
  int n;
  cout<<"Enter the input:";
  cin>>n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }

  vector<int>subset;
  printSubSets(arr,subset,0);
  
  return 0;
}