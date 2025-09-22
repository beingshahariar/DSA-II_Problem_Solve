#include<bits/stdc++.h>
using namespace std;

struct Item
{
  string name;
  double weight;
  double value;
  double ratio;
};

bool cmp (Item a, Item b)
{
  return a.ratio>b.ratio;
}

double steal (Item A[], int n, double capacity)
{
  double profit = 0.0;

  sort(A,A+n,cmp);

  for (int i =0;i<n && capacity >0;i++)
  {
    if (A[i].weight == 0)
    {
      continue;
    }

    if (capacity>= A[i].weight)
    {
      profit +=A[i].value;
      capacity -= A[i].weight;
      A[i].weight = 0;
      A[i].value = 0;
    }

    else
    {
      double fraction = capacity /A[i].weight;
      profit += A[i].value*fraction;
      A[i].weight *= (1-fraction);
      A[i].value *= (1-fraction);
      capacity = 0;
    } 
    
  }
  return profit;
}


int main()
{
  int n;
  cin>>n;
  Item a[n];

  for (int i = 0; i < n; i++)
  {
    cin>>a[i].name>>a[i].weight>>a[i].value;
    a[i].ratio = a[i].value/a[i].weight;
  }

  int k;
  cin >>k;
  double c[k];

  for (int i = 0; i < k; i++) {
    cin>>c[i];
        double profit = steal(a, n, c[i]);
        cout << "Thief " << i + 1 << " profit: " << fixed << setprecision(1) << profit << " taka\n";

    }

  cout<<"Still followingitemsareleft:\n";
  for (int i = 0; i < n; i++)
  {
    if (a[i].weight>0)
    {
      cout<<a[i].name<<" "<<a[i].weight<<"kg"<<fixed<<setprecision(1)<<a[i].value<<"taken\n";
    }
    
  }
  
  
  
  return 0;
}