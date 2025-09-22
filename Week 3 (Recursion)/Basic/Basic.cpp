#include<bits/stdc++.h>
using namespace std;

int printNums (int n)
{
  if(n==1)
  {
  cout<<"1\n";
    return n;
  }  
    cout<<n<<" ";
    printNums(n-1);
  

}

int main()
{
  printNums(10);
  return 0;
}