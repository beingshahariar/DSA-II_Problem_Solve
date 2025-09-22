#include<bits/stdc++.h>
using namespace std;

struct Exam
{
  int id;
  double time;
  double marks;
  double ratio;
};

bool cmp (Exam a,Exam b)
{
  return a.ratio>b.ratio;
}

double fractionalKnapsack(Exam A[],int n,double capacity)
{
  for (int i = 0; i < n; i++)
  {
    A[i].ratio = (double)A[i].marks/A[i].time;
  }
  sort(A,A+n,cmp);

  double totalmarks =0.0;

  for (int i = 0; i < n && capacity>0 ; i++)
  {
    if (capacity>=A[i].time)
    {
      totalmarks +=A[i].marks;
      capacity  -=A[i].time;

      cout<<"ques "<<A[i].id<<" 100% done - "
      <<A[i].marks<<" marks\n";
    }
    else
    {
     double fraction = capacity/A[i].time;
     double markstaken = A[i].marks*fraction;

     totalmarks += markstaken;

     cout << "ques " << A[i].id << " "
         << fixed << setprecision(0) << fraction * 100 << "% done - "
         << fixed << setprecision(1) << markstaken << " marks\n";

     capacity = 0;
    }
    
  }

  return totalmarks;

  
}


int main()
{
  double M,T;
  int n;
  cin>>M>>T>>n;
  
  Exam arr[n];

  for (int i = 0; i < n; i++)
  {
    cin>>arr[i].marks>>arr[i].time;
    arr[i].id=i+1;
  }
  
  double alone = fractionalKnapsack(arr,n,T);
  cout<<"Maximum "<<alone<<"marks answering alone\n";

  double withfriend = fractionalKnapsack(arr,n,2*T);
  cout<<"Maximum "<<withfriend<<"marks answering with a friend\n";

  return 0;
}