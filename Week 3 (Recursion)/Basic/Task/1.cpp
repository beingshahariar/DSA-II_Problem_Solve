#include<bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
if(n/10==0)
return 1;

return 1 + countDigits(n/10);
}


int main()
{
  int num;
  cout<<"Enter the numbers:";
  cin>>num;
  cout<<"Number of digits:"<<countDigits(num)<<endl;
  return 0;
}