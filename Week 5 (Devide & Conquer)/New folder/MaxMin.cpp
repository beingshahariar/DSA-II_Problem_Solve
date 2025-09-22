#include<bits/stdc++.h>
using namespace std;

struct Values
{
 int minVal;
 int maxVal;
};

Values MaxMin (int A[],int start, int end)
{
  if (start==end)
  {
    return Values{A[start], A[end]};
  }
   
  int mid = (start+end)/2;
  Values left = MaxMin(A,start,mid);
  Values right = MaxMin(A,mid+1,end);
  
  Values result;
  result.minVal=min(left.minVal,right.minVal);
  result.maxVal=max(left.maxVal,right.maxVal);
  return result;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    Values ans = MaxMin(a.data(), 0, n - 1);

    cout << "Minimum = " << ans.minVal << endl;
    cout << "Maximum = " << ans.maxVal << endl;
}