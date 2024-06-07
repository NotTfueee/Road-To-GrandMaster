//File Created by -- > ANRAG
//Created On -- > 05/06/24,Wed,Jun

#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(auto&i : v) cin >> i;

    long long l = 0 , r = 1e9 + 7;

    while(l <= r)
    {
        long long md = (l + r) >> 1;
        int start = 0 , f = 0;
        for(int i = 0 ; i < n ; ++i)
        {
            if(i - start == 1)
            {
                long long mx = max(v[start] , v[i]);

                if(md > mx)
                {
                    f = 1;
                    break;
                }
                start++;
            }
        }

        if(f)r = md - 1;
        else l = md + 1;
    }

    cout << r-1 << endl;
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
