#include<bits/stdc++.h>
using namespace std;

int merge (int arr[],int start,int mid,int end)
{
 
  int inversion =0;

  int m = mid-start+1;
  int n = end-mid;

  int L[m],R[n];

  for (int i = 0; i < m; i++)
  {
    L[i] = arr[start+i];
  }
  for (int j = 0; j < n; j++)
  {
    R[j] = arr[mid+1+j];
  }

  int i=0,j=0,k=start;

  while (i<m && j<n)
  {
    if (L[i]<= R[j])
    {
      arr[k] = L[i];
      i++;
    }
    else
    {
      arr[k]= R[j];
      j++;
      inversion +=(m-i);

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
    arr[k]=R[j];
    j++;
    k++;
  }

  return inversion;
}

int mergeSort(int arr[],int s,int e)
  {
    int inversion =0;
    if (s<e)
    {
      int mid = s+(e-s)/2;

      inversion += mergeSort (arr, s,mid);
      inversion += mergeSort (arr,mid+1,e);
      inversion += merge (arr,s,mid,e);
    }
    return inversion;
    
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

  int res = mergeSort(arr,0,n-1);
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" "; 
  }
  cout<<endl;

  cout<<"inversions: "<<res<<endl;
  
  return 0;
}
