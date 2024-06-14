//File Created by -- > ANRAG
//Created On -- > 09/06/24,Sun,Jun

#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

void print(vector<int>&v)
{
    for(auto&i : v)cout << i << " ";
    cout << endl;
    return;
}
void solve()
{

    long long n ; cin >> n;
    vector<long long>v(n);

    for(auto&i : v) cin >> i;

    long long mx = 0 , curr = 0 , c =0;
    for(int i = 0 ; i < n ; ++i)
    {
        mx = max(mx , v[i]);
        curr += v[i];

        if(curr - mx == mx)c++;
    }

    cout << c << endl;
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
