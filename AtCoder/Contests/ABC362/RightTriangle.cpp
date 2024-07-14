//File Created by -- > ANRAG
//Created On -- > 13/07/24,Sat,Jul
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int x1 , y1 , x2 , y2 , x3 , y3 ; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int ab = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    int bc = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
    int ca = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);

    if(ab + bc == ca || bc + ca == ab || ab + ca == bc)cout << "Yes" << endl;
    else cout << "No" << endl;

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
