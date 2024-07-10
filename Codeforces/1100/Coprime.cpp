//File Created by -- > ANRAG
//Created On -- > 11/07/24,Thu,Jul
#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n;
    vector<int> v(n);
    for(auto&i : v) cin >> i ;

    int gd = v[0];
    for(int i = 1 ; i < n ; ++i)gd = gcd(gd , v[i]);

    if(gd > 1)
    {
        cout << -1 << endl;
        return;
    }

    map<int , int> mp;

    for(int i = 0 ; i < n ; ++i)
    {
        mp[v[i]] = i+1;
    }

    int mx = 0;

    for(auto i : mp)
    {
        for(auto j : mp)
        {
            gd = gcd(i.first , j.first);

            if(gd == 1)
            {
                mx = max(mx , i.second + j.second);
            }
        }
    }

    cout << (mx == 0 ? -1 : mx) << endl;
    return;
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
