#include<iostream>
using namespace std;

void printReverse(int arr[],int n)
{
  if (n==0)
  {
    return;
  }

  cout<<arr[n-1];
  printReverse(arr,n-1);
  
}

int main()
{
  int arr[]={1,2,3,4,5};
  int size =sizeof(arr)/sizeof(arr[0]);

  printReverse(arr, size);
  return 0;
}