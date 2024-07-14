//File Created by -- > ANRAG
//Created On -- > 13/07/24,Sat,Jul
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int r , g , b ; cin >> r >> g >> b;
    string s ; cin >> s;

    if(s == "Blue")
    {
        cout << min(r , g) << endl;
    }
    else if(s == "Red")
    {
        cout << min(g , b) << endl;
    }
    else cout << min(r , b) << endl;

    return;
}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();
}
