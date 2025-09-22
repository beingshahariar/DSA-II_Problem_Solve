#include<bits/stdc++.h>
using namespace std;

struct Result
{
  int sum;
  int s;
  int e;
};

Result maxCrossNonSubArray (int A[],int s,int mid,int e)
{
  int lsum = 0;
  int lmaxsum= 0;
  int lmaxIndex = -1;

  for (int i = mid; i >=s; i--)
  {
    if (A[i]<0)
    {
      break;
    }
    lsum+=A[i];
          if (lsum>lmaxsum)
          {
            lmaxsum=lsum;
            lmaxIndex=i;
          }
  }

  int rsum= 0;
  int rmaxsum= 0;
  int rmaxIndex= -1;

  for (int i = mid+1; i <= e; i++)
  {
    if (A[i]<0)
    {
      break;
    }
    rsum+=A[i];
          if (rsum>rmaxsum)
          {
            rmaxsum=rsum;
            rmaxIndex=i;
          }
  }

  Result res;
  res.sum=lmaxsum+rmaxsum;
  res.s = (lmaxIndex == -1) ? -1 : lmaxIndex;
  res.e = (rmaxIndex==-1) ? -1 : rmaxIndex;
  return res;
  
}

Result maxSubArray(int A[],int s, int e)
{
  if (s==e)
 {
  if (A[s]>=0)
  {
    return Result{A[s],s,e};
  }
  else
  {
    return Result{0,-1,-1};
  }
 } 

  int mid =(s+e)/2;

  Result lsum = maxSubArray(A,s,mid);
  Result rsum = maxSubArray(A,mid+1,e);
  Result csum = maxCrossNonSubArray(A,s,mid,e);

  if (lsum.sum>=rsum.sum && lsum.sum>=csum.sum)
  {
    return lsum;
  }
  else if (rsum.sum>=lsum.sum && rsum.sum>=csum.sum)
  {
    return rsum;
  }
  else
  {
    return csum;
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
  
  Result ans = maxSubArray(a.data(),0,n-1);
  cout<<"Max Sum:"<<ans.sum<<"\n";
  cout<<"Start Index:"<<ans.s<<"\n";
  cout<<"End Index:"<<ans.e<<"\n";

  return 0;
}
