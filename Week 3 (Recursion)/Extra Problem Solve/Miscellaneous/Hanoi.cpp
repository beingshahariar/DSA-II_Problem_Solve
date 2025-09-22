#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n, char source, char auxiliary, char target)
{
  if (n==1)
  {
    cout<<"Move disk 1 from "<<source<<" to "<<target<<endl;
    return;
  }
  
  towerofhanoi(n-1,source,target,auxiliary);
  cout<<"Move disk " << n << " from "<<source<<" to "<<target<<endl;
  towerofhanoi(n-1,auxiliary,source,target);

}

int main()
{
  int n;
  cout<<"Num of disks:";
  cin>>n;

  towerofhanoi(n,'A','B','C');

  return 0;
}