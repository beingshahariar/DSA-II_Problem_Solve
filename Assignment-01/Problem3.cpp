#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n, char source,char helper,char target)
{
  if (n==1)
  {
    cout<<"Move disc 1 from pillar "<<source<<" to pillar "<<target<<endl;
    return;
  }

  towerofhanoi(n-1,source,target,helper);
  cout<<"Move disc "<<n<<" from pillar "<<source<<" to pillar "<<target<<endl;
  towerofhanoi(n-1,helper,source,target);
  
}

int main()
{
  int n;
  cout<<"Number of disks:";
  cin>>n;

  towerofhanoi(n,'1','2','3');

  return 0;
}