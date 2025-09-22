#include<bits/stdc++.h>
using namespace std;

int sumEvenPositions(int n,int pos = 0)
{
  if(n == 0)
  return 0;

  int x = n%10;

  if(pos%2 == 0)
  {
    return x+sumEvenPositions(n/10,pos+1);
  }
  else
  {
    return sumEvenPositions(n/10,pos+1);
  }
}

int main()
{
  int id;
  cout<<"Enter ID number:";
  cin>>id;

  int sum =sumEvenPositions(id);

  if(sum%2 == 1)
  {
    cout<<"Magician.\n";
  }
  else
  {
    cout<<"Muggle.\n";
  }

  return 0;
}