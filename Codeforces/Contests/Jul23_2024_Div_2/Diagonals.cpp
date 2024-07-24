//File Created by -- > ANRAG
//Created On -- > 23/07/24,Tue,Jul
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve() {

    int n , k ; cin >> n >> k;

    if(k == 0)
    {
        cout << 0 << endl;
        return;
    }

    if(k <= n)
    {
        cout << 1 << endl;
        return;
    }

    int ans = 1;

    k -= n;

    for(int i = n-1 ; i >=1 && k > 0  ; --i)
    {
        k -= i;
        ans++;

        if(k <= 0)break;

        k -= i;
        ans++;
    }

    cout << ans << endl;
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
