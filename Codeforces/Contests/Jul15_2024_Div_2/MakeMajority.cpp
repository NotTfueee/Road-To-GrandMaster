//File Created by -- > ANRAG
//Created On -- > 15/07/24,Mon,Jul
#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve() {
    int n ; cin >> n ;
    string s; cin >> s;

    string ns;

    for(int i = 0 ; i < n ; ++i)
    {
        if(int(ns.size()) == 0)
        {
            ns.push_back(s[i]);
            continue;
        }

        if(s[i] == '0' && ns.back() == '0')continue;
        else ns.push_back(s[i]);
    }

    int o = 0 , z = 0;
    for(int i = 0 ; i < int(ns.size()) ; ++i)
    {
        if(ns[i] == '1')o++;
        else z++;
    }

    cout << ((o > z) ? "Yes" : "No") << endl;
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
