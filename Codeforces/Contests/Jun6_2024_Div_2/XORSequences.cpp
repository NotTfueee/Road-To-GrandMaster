//File Created by -- > ANRAG
//Created On -- > 05/06/24,Wed,Jun

#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int x , y ; cin >> x >> y;

    for(int i = 0 ; i < 32 ; ++i)
    {
        if(((x >> i)&1) != ((y >> i) & 1))
        {
            cout << (1LL << i) << endl;
            return;
        }
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
