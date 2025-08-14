#include<iostream>
using namespace std;

int gcd (int x,int y)
{
  if (y==0)
  {
    return x;
  }

  return gcd(y,x%y);
  
}

int main()
{
  int x,y;
  cout<<"Enter two positive integer:";
  cin>>x>>y;

  cout<<"GCD is:"<<gcd(x,y)<<endl;
  return 0;
}