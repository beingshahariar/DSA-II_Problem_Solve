#include<bits/stdc++.h>
using namespace std;

struct Result
{
  int sum;
  int s;
  int e;
};

Result MaxCrossSubArray(int A[], int s,int mid,int e)
{
  int lsum =0;
  int lmaxsum = INT_MIN;
  int lmaxindex = -1;

  for (int i = mid; i >=s; i--)
  {
    lsum += A[i];
    if (lsum>lmaxsum)
    {
      lmaxsum = lsum;
      lmaxindex = i;
    }
    
  }

  int rsum = 0;
  int rmaxsum = INT_MIN;
  int rmaxindex = -1;

  for (int i = mid+1; i <= e ; i++)
  {
    rsum +=  A[i];
    if (rsum>rmaxsum)
    {
      rmaxsum = rsum;
      rmaxindex = i;
    }
    
  }

  Result res;
  res.sum = lmaxsum +rmaxsum;
  res.s = lmaxindex;
  res.e = rmaxindex;
  return res;
   
}

Result MaxSubArray ( int A[], int s,int e)
{
  if (s==e)
  {
    return Result{A[s],s,e};
  }

  int mid =(s+e)/2;

  Result lsum = MaxSubArray (A,s,mid);
  Result rsum = MaxSubArray (A,mid+1,e);
  Result csum = MaxCrossSubArray(A,s,mid,e);

  if (lsum.sum>= rsum.sum && lsum.sum>= csum.sum)
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

  Result res = MaxSubArray(a.data(),0,n-1);

  cout<<"Max sum: "<<res.sum<<"\n";
  cout<<"Start Index: "<<res.s<<"\n";
  cout<<"End Index: "<<res.e<<"\n";
  
  return 0;
}
