
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int h , n ; cin >> h >> n;
    vector<int> d(n) , c(n);
    for(auto&i : d) cin >> i;
    for(auto&i : c) cin >> i;

    long long total = accumulate(d.begin() , d.end() , 0LL);

    long long l = 1LL , r = 4*1e11+1 , ans = 0;

    while(l <= r)
    {
        long long mid = (l + r)>>1;
        long long sum = total;
        for(int i = 0 ; i < n ; ++i)
        {
            long long damage = d[i] * ( (mid - 1) / c[i]);
            sum += damage;

            if(sum >= h)break;
        }

        if(sum >= h)
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;

    }

    cout << ans << endl;
    return;
}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t ; cin >> t;
    while(t--)solve();
}
