//File Created by -- > ANRAG
//Created On -- > 11/07/24,Thu,Jul
#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n , m , k ; cin >> n >> m >> k;

    vector<int> v;

    for(int i = n ; i >= k ; --i)v.push_back(i);

    for(int i = 1 ; i <= n ; ++i)
    {
        if(i <= m || i >= k)continue;
        else v.push_back(i);
    }

    for(int i = 1 ; i <= m ; ++i)v.push_back(i);

    for(auto i : v) cout << i << " ";
    cout << endl;

    return; 
}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int t;
    cin >> t;
    while (t--)solve();
}