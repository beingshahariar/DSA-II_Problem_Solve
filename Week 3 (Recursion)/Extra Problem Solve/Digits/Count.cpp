#include<iostream>
using namespace std;

int countDigit(int n)
{
  if (n==0)
  {
    return 0;
  }
  return 1+countDigit(n/10);
  
}

int main()
{
  int num;
  cout<<"Enter the integers:";
  cin>>num;
  
  cout<<"Digits are:"<<countDigit(num)<<endl;

  return 0;
}