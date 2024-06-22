//File Created by -- > ANRAG
//Created On -- > 22/06/24,Sat,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n;
    vector<int>v(2*n);
    for(auto&i : v) cin >> i;

    long long  c = 0;

    for(int i = 2 ; i < 2*n ; ++i)
    {
        if(v[i] == v[i-2])c++;
    }
    cout << c << endl;
    return;
}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

 solve();
}
