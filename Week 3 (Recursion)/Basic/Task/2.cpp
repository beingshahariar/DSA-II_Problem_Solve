#include<bits/stdc++.h>
using namespace std;

int power(int x,int y)
{
  if(y==0)
  return 1;

  return x* power(x,y-1);
}

int main()
{int x,y;
  cout<<"Enter the digit:";
  cin>>x>>y;
  cout<<"The power is: "<<power(x,y)<<endl;
  return 0;
}