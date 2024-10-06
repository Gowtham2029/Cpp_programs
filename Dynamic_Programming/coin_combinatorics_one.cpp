#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

ll solve(ll N, ll X, vector<ll>& coins)
{
    ll dp[X + 1] = {};

    dp[0] = 1;
    for (int i = 1; i <= X; i++) {
        for (int j = 0; j < N; j++) {
            if (coins[j] > i)
                continue;
            dp[i] = (dp[i] + dp[i - coins[j]]) % mod;
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
  for(int i = 0; i<coins.size(); i++)
  {
    count += solv(i, x-coins[i], coins, dp);
  }
  
  return dp[x] = count;
}


int main()
{
    
    ll N = 3, X = 8;
    vector<ll> coins = { 2, 3, 5 };
    vector<ll>dp;
    dp.resize(X+1, -1);
    cout << solve(N, X, coins) << "\n";
    cout << solv(N-1, X, coins, dp) << "\n";
    
}
