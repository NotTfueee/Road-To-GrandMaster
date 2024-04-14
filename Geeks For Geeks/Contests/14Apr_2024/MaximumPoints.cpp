// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve() 
{
    int n ; cin >> n ;

    vector<vector<long long >>arr(n , vector<long long>(2));

    for(int i = 0 ; i < n ; ++i)
    {
        long long a , b; cin >> a >> b;
        arr[i][0] = a;
        arr[i][1] = b;
    }

    long long dp[200001] = {};

    for(int i = n-1 ; i >= 0 ; --i)
    {
        dp[i] = max(dp[i+1] , arr[i][0] + dp[i + arr[i][1] + 1]);
    }

    cout << dp[0] << endl;
    return;
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

  solve();
}