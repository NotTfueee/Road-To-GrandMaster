//File Created by -- > ANRAG
//Created On -- > 05/06/24,Wed,Jun

#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void print(vector<vector<int>>&v)
{
    for(int i = 0 ; i < v.size() ; ++i)
    {
        cout << v[i][0] << " " << v[i][1] << endl;
    }
    cout << endl;
}
void solve()
{
    int n ; cin >> n;
    vector<vector<int>> v(n , vector<int>(2));

    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i][0] >> v[i][1];
    }

    int mx = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            if(i == j)continue;
            int sum = 0;
            sum += (v[i][0] * v[j][1] + v[i][1] * v[j][0]);

            mx = max(mx , sum);
        }
    }

    cout << mx << endl;
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
