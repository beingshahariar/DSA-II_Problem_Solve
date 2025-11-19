#include<bits/stdc++.h>
using namespace std;

#define INF 1e9

int coinChangeDP(vector<int>&coins, int N){
    vector<int> dp(N+1, INF);
    dp[0] = 0; //our base case, since no coin is needed for 0

    for(int i = 1; i <= N; i++){
        for(int c: coins){
            if(c <= i){
                dp[i] = min(dp[i], 1 + dp[i-c]);
            }
        }
    }
    return (dp[N] >= INF)? -1 : dp[N];
}

int main(){
    vector<int> coins = {1, 5, 6, 8};
    int N = 11;
    cout << coinChangeDP(coins, N) << endl;
}
