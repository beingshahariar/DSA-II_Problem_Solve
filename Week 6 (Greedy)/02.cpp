#include<bits/stdc++.h>
using namespace std;
struct times
{
    int s,e;
};
bool cam(times a,times b)
{
    return a.e<b.e;
}
int activities(times a[],int n)
{
    sort(a,a+n,cam);
    int k=0;
    int cou=1;
    cout<<"take: "<<"["<<a[k].s<<","<<a[k].e<<"]"<<endl;
    for(int i=1;i<n;i++)
    {
        if(a[k].e<=a[i].s)
        {
            k=i;
            cou++;
            cout<<"take: "<<"["<<a[i].s<<","<<a[i].e<<"]"<<endl;
        }
    }
    return cou;
}
int main()
{
    int n;
    cin>>n;
    times a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].s>>a[i].e;
    }
    cout<<activities(a,n)<<" Activities can be performed";
}