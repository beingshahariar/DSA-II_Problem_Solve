#include<bits/stdc++.h>
using namespace std;

struct Answer
{
 int sum;
 int s;
 int e;
};

Answer MaxCrossingSubArray(int A[], int s, int mid,int e)
{
  int lsum =0;
  int lmaxsum = INT_MIN;
  int lmaxIndex= -1;

  for (int i = mid; i >=s; i--)
  {
    lsum=lsum+A[i];
         if (lsum>lmaxsum)
         {
          lmaxsum=lsum;
          lmaxIndex=i;
         }   
  }

  int rsum=0;
  int rmaxsum= INT_MIN;
  int rmaxIndex=-1;
  
  for (int i = mid+1; i <=e; i++)
  {
    rsum = rsum+A[i];
          if (rsum>rmaxsum)
          {
            rmaxsum=rsum;
            rmaxIndex=i;
          }     
  }

  Answer result;
  result.sum = lmaxsum + rmaxsum;
  result.s = lmaxIndex;
  result.e = rmaxIndex;
  return result;
}

Answer MaximumSubArray(int A[],int s,int e)
{
  if (s==e)
  {
    return Answer{A[s],s,e};
  }

  int mid=(s+e)/2;

  Answer lsum= MaximumSubArray(A,s,mid);
  Answer rsum= MaximumSubArray(A,mid+1,e);
  Answer Csum= MaxCrossingSubArray(A,s,mid,e);
  
  if (lsum.sum>= rsum.sum && lsum.sum >= Csum.sum)
  {
    return lsum;
  }
  else if (rsum.sum>= lsum.sum && rsum.sum >= Csum.sum)
  {
    return rsum;
  }
  else
  {
    return Csum;
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

  Answer ans = MaximumSubArray(a.data(),0,n-1);
  
  cout<<"Max Sum: "<<ans.sum<<"\n";
  cout<<"Start Index: "<<ans.s<<"\n";
  cout<<"End Index: "<<ans.e<<"\n";
  
  return 0;
}