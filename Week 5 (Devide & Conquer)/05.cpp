#include<bits/stdc++.h>
using namespace std;

struct Student
{
  string name;
  int id;
  double cgpa;
};

Student MaxGPA(Student A[],int s,int e)
{
  if (s==e)
  {
    return A[s];
  }
  
  int mid =(s+e)/2;

  Student left = MaxGPA(A,s,mid);
  Student right = MaxGPA(A,mid+1,e);

  if (left.cgpa>=right.cgpa)
  {
    return left;
  }
  else
  {
    return right;
  }
  
  
}


int main()
{
  int n;
  cin>>n;
  Student st[n];

  for (int i = 0; i < n; i++)
  {
    cin>>st[i].name>>st[i].id>>st[i].cgpa;
  }
  
  Student ans = MaxGPA(st,0,n-1);

  cout<<"Top student:"<<ans.name<<"\n";
  cout<<"ID:"<<ans.id<<"\n";
  cout<<"CGPA:"<<ans.cgpa<<endl;


  return 0;
}