//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/



void solve()
{
        int n , m ; cin >> n >> m;
    vector< vector<int> > grid (n , vector<int>(m));
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            cin >> grid[i][j];
        }
    }
 
    int mn = 1000 , cm = 0 , sum = 0;
 
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            if(grid[i][j] < 0)cm ++ ;
            sum += abs(grid[i][j]);
            mn = min(mn , abs(grid[i][j]));
        }
    }
 
    if(!(cm & 1))
    {
        cout << sum << endl;
        return;
    }
 
    cout << sum - (mn << 1) << endl;
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


    int t ; cin >> t;
    while(t--)solve();
}
