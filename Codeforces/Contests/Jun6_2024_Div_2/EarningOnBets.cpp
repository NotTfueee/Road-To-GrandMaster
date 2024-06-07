//File Created by -- > ANRAG
//Created On -- > 05/06/24,Wed,Jun

#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

long long  find(vector<long long>&v)
{
    long long lcm = v[0];
    for(int i = 1 ; i < int(v.size()) ; ++i)
    {
        lcm = (lcm * v[i]) / gcd(lcm , v[i]);
    }

    return lcm;
}

void solve()
{
    long long n ; cin >> n;
    vector<long long> v(n);
    for(auto&i : v) cin >> i;

    long long lcm = find(v) , sum = 0;

    vector<long long>ans;
    for(int i = 0 ; i < n ; ++i)
    {
        long long val = lcm / v[i];
        ans.push_back(val);
        sum += val;
    }

    if(sum < lcm)
    {
        for(auto i : ans)cout << i << " ";
        cout << endl;
        return;
    }

    cout << -1 << endl;
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
