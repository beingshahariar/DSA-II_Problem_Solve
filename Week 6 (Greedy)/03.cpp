#include<bits/stdc++.h>
using namespace std;
void gcc(int a[],int n,int c)
{
    sort(a,a+n,greater<int>());

    int totalCoins=0;
    for (int i = 0; i < n; i++)
    {
        if (c >= a[i])
        {
            int cnt = c / a[i];   // how many coins of this type
            c -= cnt * a[i];      // reduce amount
            totalCoins += cnt;

            cout << a[i] << " cents --- " << cnt << endl;
        }
    }

    cout << "Total " << totalCoins << " coins" << endl;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c;
    cin>>c;
    gcc(a, n, c);

}