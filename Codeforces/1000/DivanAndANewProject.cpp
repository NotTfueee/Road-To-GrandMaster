//File Created by -- > ANRAG
//Created On -- > 20/06/24,Thu,Jun
#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    long long n ; cin >> n;
    vector<pair<long long , long long>> v(n);
    for(long long i = 0 ; i < n ; ++i)
    {
        long long x ; cin >> x;
        v[i] = {x , i+1};
    }
    sort(v.rbegin() , v.rend());

    long long c = 0 , mul = 0;
    long long ans = 0;
    for(long long i = 0 ; i < n ; ++i)
    {
        if(c % 2 == 0)mul++;
        long long val = (mul << 1)*v[i].first;
        ans += val;

        c++;
    }

    vector<long long> a(n);
    long long f = 0 , p = 1 , neg = -1;
    cout << ans << endl;
    cout << 0 << " " ;
    for(long long i = 0 ; i < n ; ++i)
    {
        if(f)
        {
            a[v[i].second-1] = p;
            p++;
        }
        else
        {
            a[v[i].second-1] = neg;
            neg--;
        }
        f^= 1;
    }

    for(long long i = 0 ; i < n ; ++i)cout << a[i] << " ";
    cout << endl;
    return;
}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)solve();
}
