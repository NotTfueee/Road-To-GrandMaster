//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

void solve()
{
    int n , m ; cin >> n >> m;

    vector<long long> req(m);
    for(auto&i : req)cin >> i;

    vector< vector<int> > grid(n , vector<int>(m));

    for(int i = 0 ; i < n ; ++i )
    {
        for(int j = 0 ; j < m ; ++j)
        {
            cin >> grid[i][j];
        }
    }

    for(int j = 0 ; j < m ; ++j)
    {
        long long sum = 0;
        for(int i = 0 ; i < n ; ++i)
        {
            sum += grid[i][j];
        }

        if(sum < req[j])
        {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
    return;
}

/*----------------------------------------------------------------------------------------*/

int main()
{
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


  solve();
}
