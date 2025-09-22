#include<bits/stdc++.h>
using namespace std;

int MajorityElement(int A[], int s, int e)
{
  if(s==e)
  {
    return A[s];
  }

  int mid =(s+e)/2;
  int left=MajorityElement(A,s,mid);
  int right = MajorityElement(A,mid+1,e);

  if (left==right)
  {
    return left;
  }

  int leftCount = 0,rightCount =0;
  for (int i = s; i <= e; i++)
  {
    if (A[i]==left)
    {
      leftCount++;
    }
    else if (A[i]==right)
    {
      rightCount++;
    }
    
    return (leftCount>rightCount) ? left:right;
    
  }
  
  

}

int main()
{
  int n;
  cin>>n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }

  int ans = MajorityElement(a.data(),0,n-1);
  cout<<"Majority Element:"<<ans<<endl;
  
  return 0;
}