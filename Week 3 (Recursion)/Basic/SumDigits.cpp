#include<bits/stdc++.h>
using namespace std;

int SumDigits(int n)
{
  if(n==0)
  return n;
  return n%10 + SumDigits(n/10);
}


int main()
{
  cout<<SumDigits(1234);
  return 0;
}