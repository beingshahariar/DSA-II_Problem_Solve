#include<bits/stdc++.h>
using namespace std;

int knapSackMemoization(int n, int W, vector<int>& weight, vector<int>& value,
                        vector<vector<int>>& dp)
{
    if(n == 0) return 0;
    if(W == 0) return 0;
    if(dp[n][W] != -1) return dp[n][W];

    if(weight[n-1] <= W)
    {
        return dp[n][W] = max(
    value[n-1] + knapSackMemoization(n-1, W-weight[n-1], weight, value, dp),
    knapSackMemoization(n-1, W, weight, value, dp));
    }
    else{
        return dp[n][W] = knapSackMemoization(n-1, W, weight, value, dp);
    }
}

int knapSackBottomUp(int n, int W, vector<int>& weight, vector<int>& value) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            if (weight[i - 1] <= w) {
                dp[i][w] = max(value[i - 1] + dp[i - 1][w - weight[i - 1]],
                               dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W];
}



int main()
{
    int n;
    cin >> n;
    vector<int> weight(n);
    vector<int> value(n);

    for(int i = 0; i < n; i++)
    {
        cin >> weight[i] >> value[i];
    }

    int W;
    cin >> W;
    //vector <vector<int> >dp(n+1, vector<int>(W+1, -1));
    //cout << knapSackMemoization(n, W, weight, value, dp) << endl;

    cout << knapSackBottomUp(n, W, weight, value) << endl;

}
