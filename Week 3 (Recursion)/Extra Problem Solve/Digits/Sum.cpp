#include<iostream>
using namespace std;

int sumDigit(int n)
{
  if (n==0)
  {
    return 0;
  }
  
  return n%10 + sumDigit(n/10);
}

int main()
{
  int num;
  cout<<"Enter the integers:";
  cin>>num;
  
  cout<<"The sum is:"<<sumDigit(num)<<endl;
  return 0;
}