#include<iostream>
using namespace std;

int SumofSquare(int n)
{
 if (n==1)
 {
  return 1;
 }
 
 return n*n +SumofSquare(n-1);
}

int main()
{
  int n;
  cout<<"Enter the integer:";
  cin>>n;
  cout<<"The sum is: "<<SumofSquare(n)<<endl;
  return 0;
}