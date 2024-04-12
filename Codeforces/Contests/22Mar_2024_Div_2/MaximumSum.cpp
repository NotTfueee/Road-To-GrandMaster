// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
const int MOD = 1000000007;

long long pow_mod(long long base, long long exponent) {
    long long result = 1;
    base %= MOD;
    while (exponent > 0) {
        if (exponent & 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent >>= 1;
    }
    return result;
}

void solve()
{
    int n , k ; cin >> n >> k ;
    vector<int>v(n);

    int MOD  = 1e9+7;
    for(auto&i : v)cin >> i;

    long long sum = 0 , sumOfArray = 0 , mx = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        if(sum >= 0)sum += v[i];
        else sum = v[i];

        sumOfArray += v[i];

        mx = max(mx , sum);

    }

    if (mx > 0) 
    {
        long long p = pow_mod(2, k);
        sumOfArray += ((((p - 1) % MOD) * (mx % MOD)) % MOD);

    }

    long long ans = ((sumOfArray + MOD) % MOD + MOD ) % MOD;
    cout << ans << endl;

    return ;
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int t ; cin >> t;
   while(t-- ) solve();

   return 0;
}