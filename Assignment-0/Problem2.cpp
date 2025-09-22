#include<bits/stdc++.h>
using namespace std;

struct Student
{
 int roll;
 string name;
};

int magicalValue(const string & name)
{
  int sum = 0;
  for(char c:name)
  {
    sum = sum+(int)c;
  }
  return sum;
}

bool compareStudnets(const Student &a, const Student &b)
{
  int magA = magicalValue(a.name);
  int magB = magicalValue(b.name);

  if (magA!=magB)
  {
    return magA>magB;
    return a.roll<b.roll;
  }
  
}


int main()
{
 int n;
 cout<<"Enter input:";
 cin>>n;

 vector<Student>Students(n);

 for (int i = 0; i < n; i++)
 {
  cin>>Students[i].roll>>Students[i].name;
 }

 sort(Students.begin(),Students.end(),compareStudnets);

 for(auto &s : Students)
 {
  cout<<s.roll<<" "<<s.name<<endl;
 }
 
  return 0;
}