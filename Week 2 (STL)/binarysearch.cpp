#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> n={10,3,7,1,9,5};
    sort(n.begin(),n.end());
    int target = 7;
    if (binary_search(n.begin(), n.end(), target))
    {
        cout << target << " found in the vector!" << endl;
    }
    else
    {
        cout << target << " not found in the vector." << endl;
    }
}
