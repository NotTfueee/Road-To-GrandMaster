//File Created by -- > ANRAG
//Created On -- > 20/06/24,Thu,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    long long x , y ; cin >> x >> y;
    vector<vector<long long>> v(4);

    for(int i = 0 ; i < 4 ; ++i)
    {
        long long k ; cin >> k;
        for(int j = 0 ; j < k; ++j)
        {
            long long val; cin >> val;
            v[i].push_back(val);
        }
    }

    long long mx = 0 , s;
    for(int i = 0 ; i < 4 ; ++i)
    {
        auto side = v[i];
        long long len = side.back() - side.front();

        if(i < 2) mx = max(mx , len * y);
        else mx = max(mx , len * x);
    }

    cout << mx << endl;
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
