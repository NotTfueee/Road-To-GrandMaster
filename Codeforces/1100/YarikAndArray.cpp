//File Created by -- > ANRAG
//Created On -- > 20/06/24,Thu,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n;
    vector<int> v(n);
    for(auto&i : v) cin >> i;

    long long mx = INT_MIN , sum = 0 , f ;

    if(v[0]&1)f = 1;
    else f = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        if(sum >= 0 && ( (f == 0 && !(v[i]&1)) || (f == 1 && v[i]&1) ))sum += v[i];
        else
        {
            if(v[i]&1)f = 1;
            else f = 0;

            sum = v[i];
        }

        f ^= 1;
        mx = max(mx , sum);
    }

    cout << mx << endl;
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
