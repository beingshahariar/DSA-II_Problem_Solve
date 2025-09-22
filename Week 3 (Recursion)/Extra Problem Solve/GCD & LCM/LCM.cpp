#include<iostream>
using namespace std;

int GCD (int x,int y)
{
  if (y==0)
  {
    return x;
  }
  return GCD(y,x%y);
}

int LCM(int x,int y)
{
  return (x/GCD(x,y))*y;
}

int main()
{
  int x,y;
  cout<<"Enter two integer:";
  cin>>x>>y;

  cout<<"LCM is:"<<LCM(x,y);
  return 0;
}