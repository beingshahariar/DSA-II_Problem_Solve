#include<bits/stdc++.h>
using namespace std;

struct Result
{
 int largest;
 int slargest;
};

Result Pair (int A[],int s, int e)
{
  if(s==e)
  {
    return Result{A[s],INT_MIN};
  }
  
  int mid =(s+e)/2;
  Result left =Pair(A,s,mid);
  Result right =Pair(A,mid+1,e);

  Result res;
  res.largest=max(left.largest,right.largest);
  res.slargest=max
               (min(left.largest,right.largest),
               max(left.slargest,right.slargest)
               );
    return res;
}

int main()
{
  int n;
  cin>>n;

  vector <int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }

  Result ans = Pair(a.data(),0,n-1);
  cout<<"Largest:"<<ans.largest<<"\n";
  cout<<"S Largers:"<<ans.slargest<<"\n";
  

  return 0;
}