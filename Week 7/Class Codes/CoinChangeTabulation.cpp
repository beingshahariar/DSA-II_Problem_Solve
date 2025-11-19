#include<bits/stdc++.h>
using namespace std;

int coinChangeDP(int N, vector<int>& coins){
    vector<int> dp(N+1, 1e9);
    dp[0] = 0;
    for(int i = 1; i <= N; i++){
        for(int c: coins){
            if(c <= i){
                dp[i] = min(dp[i], 1+ dp[i-c]);
            }
        }
    }
    return (dp[N] >= 1e9) ? -1: dp[N];
}


int coinChangeMemoization(int N, vector<int>& coins, vector<int>& dp){
    if(N == 0) return 0;
    if(N < 0) return 1e9;

    if(dp[N] != -1) return dp[N];

    int result = 1e9;
    for(int c: coins){
        result = min(result, 1 + coinChangeMemoization(N - c, coins, dp));
    }
    return dp[N] = result;
}

int main(){
    int N;
    cin >> N;
    vector<int>coins = {1, 5, 6, 8};
    vector<int>dp(N+1, -1);
    //cout << coinChangeDP(N, coins) << endl;
    int ans = coinChangeMemoization(N, coins, dp);
    (ans >= 1e9)? cout << -1 : cout << ans;
    return 0;
}
