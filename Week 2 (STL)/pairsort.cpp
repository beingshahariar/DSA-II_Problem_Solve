#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator(int a,int b)
{
    return a>b;
}
int main()
{
    vector<int>num={5,2,9,1,5,6};
    sort(num.begin(),num.end());
    cout<<"Ascending order:";
    for(int x:num)cout<<x<<" ";
    cout<<endl;

    sort(num.begin(),num.end(),comparator);
    cout<<"Descending order:";
    for(int x:num)cout<<x<<" ";
    cout<<endl;
}
