//File Created by -- > ANRAG
//Created On -- > 10/07/24,Thu,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve() {
    int x, y;
    cin >> x >> y;

    if (x > y) {
        if (y + 1 == x || y + 1 == x + 1)cout << "YES" << endl;
        else cout << "NO" << endl;
    } else if (x == y)cout << "YES" << endl;
    else
    {
        if(x + 2 == y || x + 1 == y)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
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
