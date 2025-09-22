#include<bits/stdc++.h>
using namespace std;

void merge ( int arr[], int s, int mid, int e)
{
  int m = mid-s+1;
  int n = e-mid;
  
  int L[m], R[n];

  for (int i = 0; i < m; i++)
  {
    L[i] = arr[s+i];
  }
  for (int j = 0; j < n; j++)
  {
    R[j] = arr[mid+1+j];
  }

  int i =0,j=0,k=s;

  while (i<m && j<n)
  {
    if (L[i]>=R[j])
    {
      arr[k]=L[i];
      i++;
    }
    else
    {
      arr[k]=R[j];
      j++;
    }
    k++;
  }
  
  while (i<m)
  {
    arr[k]=L[i];
    i++;
    k++;
  }

  while (j<n)
  {
    arr[k] = R[j];
    j++;
    k++;
  }

}

void mergesort(int arr[],int s,int e)
{
  if (s<e)
  {
    int mid = s+(e-s)/2;

    mergesort (arr,s,mid);
    mergesort (arr,mid+1,e);
    merge (arr, s,mid,e);
  }
  
}


int main()
{
  int n;
  cin>>n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }

  mergesort(arr,0,n-1);
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  
  return 0;
}