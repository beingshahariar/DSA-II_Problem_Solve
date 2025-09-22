#include<iostream>
using namespace std;

int sumofSeries(int n)
{
  if (n==1)
  {
    return 1;
  }

  return n*n + sumofSeries(n-1);
  
}

int main()
{
  int num;
  cout<<"Enter the integer:";
  cin>>num;

  cout<<"The output is:"<<sumofSeries(num);
  return 0;
}