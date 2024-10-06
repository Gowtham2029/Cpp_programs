#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

ll solve(ll N, ll X, vector<ll>& coins)
{
   
    vector<ll> dp(X + 1, 0);

    dp[0] = 1;
    for (int i = 0; i < N; i++) {
        for (int j = coins[i]; j <= X; j++) {
           
            dp[j] = (dp[j] + dp[j - coins[i]]) % mod;
        }
    }

    return dp[X];
}

int solv(int ind, int x, vector<ll>&coins, vector<ll>&dp)
{
    if(x == 0)return 1;
    if(x < 0)return 0;

     if(dp[x] != -1)return dp[x];

    int count = 0;

    for(int i = ind; i<=coins.size(); i++)
    {
        // if(coins[i] != coins[i-1]){
              count += solv(i, x - coins[i], coins, dp);
        }//
        
    }

    return dp[x] = count;
}

int main()
{
   
    ll N = 3, X = 9;
    vector<ll> coins = { 2, 3, 5 };
    vector<ll>dp(X+1, -1);
    cout << solve(N, X, coins)<<endl;
    cout << solv(0, X, coins, dp)<<endl;
}
