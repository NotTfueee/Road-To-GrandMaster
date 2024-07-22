//File Created by -- > ANRAG
//Created On -- > 20/07/24,Sat,Jul
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n;
    vector<int> v(n);
    for(auto&i : v)cin >>i;

    map<int , int> mp;
    for(auto i : v)mp[i]++;

    for(auto i : mp)
    {
        if(i.second &1)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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
