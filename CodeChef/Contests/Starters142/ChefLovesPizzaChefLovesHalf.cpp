//File Created by -- > ANRAG
//Created On -- > 10/07/24,Thu,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
vector<int> pre;
void solve()
{
    int n ; cin >> n ;
    if(!(n & (n - 1))) cout << 0 << endl;
    else cout << pre[n] << endl;

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
    pre.resize(1e5+1 , 0 );

    for(int i = 2 ; i < pre.size() ; ++i)
    {
        if(!(i&1))
        {
            if(!(i&( i - 1)))pre[i] = 0;
            else pre[i] = pre[i - 1] + 4;
        }
        else pre[i] = pre[i-1];
    }
    while (t--)solve();
}