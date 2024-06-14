//File Created by -- > ANRAG
//Created On -- > 09/06/24,Sun,Jun


#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve() {

    int n , m ; cin >> n >>m;
    vector<vector<char> > grid(n , vector<char>(m));

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m;  ++j)
        {
            cin >> grid[i][j];
        }
    }

    int mx = 0 , start , end , r;

    for(int i = 0 ; i < n; ++i)
    {
        int c =0 , ts , te;
        for(int j = 0 ; j < m ; ++j)
        {
            if(c == 0 && grid[i][j] == '#')ts = j;
            if(grid[i][j] == '#')
            {
                c++;
                te = j;
            }
        }

        if(c > mx)
        {
            mx = c;
            start = ts;
            end = te;
            r = i;
        }
    }

    int len = (end - start + 1)/2;
    start += len;
    cout << r+1 << " " << start + 1<< endl;
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
