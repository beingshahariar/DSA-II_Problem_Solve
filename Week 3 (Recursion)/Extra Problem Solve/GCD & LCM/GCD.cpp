#include<iostream>
using namespace std;

int GCD (int x, int y)
{
  if (y==0)
  {
    return x;
  }

  return GCD(y,x%y);
}

int main()
{
  int x,y;
  cout<<"Enter two integers:";
  cin>>x>>y;

  cout<<"GCD is:"<<GCD(x,y);
  return 0;
}