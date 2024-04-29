// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , k ; cin >> n >> k;

    vector<int> v(n);
    for(auto&i : v)cin >> i;

    map<int , int> map;
    long long ans = 0;
    for(int i = k ; i < n ; ++i)
    {
        map[v[i-k]]++;

        ans += map[v[i]];
    }

    cout << ans << endl;
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
