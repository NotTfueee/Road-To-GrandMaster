//File Created by -- > ANRAG
//Created On -- > 20/07/24,Sat,Jul
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n , x , y ; cin >> n >> x >> y;
    vector<int> v(n);
    y--;

    for(int i = 0 ; i < n ; ++i)v[i] = 1;

    int c = 0;

    for(int i = y-1 ; i >= 0 ; --i)
    {
        if(c < 1)
        {
            v[i] = -1;
            c++;
        }
        else c = 0;
    }

    c = 0;

    for(int i = x ; i < n ; ++i)
    {
        if(c < 1)
        {
            v[i] = -1;
            c++;
        }
        else c = 0;
    }

    for(auto i : v) cout << i << " ";
    cout << endl;

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
