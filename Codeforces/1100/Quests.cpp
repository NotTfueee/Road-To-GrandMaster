//File Created by -- > ANRAG
//Created On -- > 20/06/24,Thu,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    long long n , k ; cin >> n >> k;

    vector<long long> a(n) , b(n);
    for(auto&i : a) cin >> i;
    for(auto&i : b) cin >> i;

    long long ans = 0 , mx = 0 , sum = 0 , c = 0;

    for(int i = 0 ; i < n && c < k; ++i)
    {
        sum += a[i];
        mx = max(mx , b[i]);

        ans = max(ans ,  sum + ( mx * (k - (i + 1))));
        c++;
    }
    cout << ans << endl;
}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)solve();
}
