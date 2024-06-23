//File Created by -- > ANRAG
//Created On -- > 23/06/24,Sun,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n , m ; cin >> n >> m;
    vector<vector<int>> grid(n , vector<int>(m));

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)cin >> grid[i][j];
    }

    queue<vector<int>> q;

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            int curr = grid[i][j] , up = -1 , down = -1 , left = -1 , right = -1;

            if (i > 0)
                up = grid[i - 1][j];
            if (i < n - 1)
                down = grid[i + 1][j];
            if (j > 0)
                left = grid[i][j - 1];
            if (j < m - 1)
                right = grid[i][j + 1];

            if(curr > up && curr > down && curr > left && curr > right)
            {
                int mx = max(up , max(left , max(right , down)));
                vector<int>x = {curr , i , j , mx};
                q.push(x);
            }
        }
    }

    while(!q.empty())
    {
        auto arr = q.front();
        q.pop();

        int diff = arr.front() - arr.back();
        grid[arr[1]][arr[2]] = arr.front() - diff;
    }

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)cout << grid[i][j] << " ";
        cout << endl;
    }
    return;
}
/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)solve();
}
