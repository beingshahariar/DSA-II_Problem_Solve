#include<bits/stdc++.h>
using namespace std;
struct seminar
{
    string id;
    int s;
    int d;
};
bool cam(seminar a,seminar b)
{
    return (a.s+a.d)<(b.s+b.d);
}
int booking(seminar A[],int n,int x)
{
    sort(A,A+n,cam);
    int count=1;
    int k=0;
    cout<<A[k].id<<endl;
    for(int i=1;i<n;i++)
    {
        if((A[k].s+A[k].d+x)<= A[i].s)
        {
            count++;
            k=i;
            cout<<A[k].id<<endl;
        }
    }
    return count;
}
int main()
{
    int N,X;
    cin>>N;
    seminar a[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i].id>>a[i].s>>a[i].d;
    }
    cin>>X;
    cout<<" chosen clubs:\n"<<booking(a,N,X);
}