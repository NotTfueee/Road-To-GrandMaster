// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void print(vector<vector<int>>&forest)
{
    int n = forest.size();
    for(int i = 1 ; i < n ; ++i)
    {
        for(int j = 1 ;j < n ; ++j)
        {
            cout << forest[i][j] << " ";
        }

        cout << endl;
    }
}

void solve()
{
    int n , q; cin >> n >> q;
    vector<vector<int>>pfs(n + 1 , vector<int>(n+1));


    for(int i = 1 ; i <= n ; ++i)
    {
        int sum = 0;

        for(int j = 1 ; j <= n ; ++j)
        {
            char c ; cin >> c;

            if(c == '*')sum++;

            pfs[i][j] = sum;
        }
    }

    for(int j = 1; j <= n ; ++j)
    {
        int sum = 0;
        for(int i = 1 ; i <= n ;++i)
        {
            sum += pfs[i][j];

            pfs[i][j] = sum;
        }
    }
    

    for(int i = 0 ; i < q; ++i)
    {
        int x1 , y1 , x2 , y2 ; cin >> x1 >> y1 >> x2 >> y2;

        int ans = pfs[x2][y2] + pfs[x1-1][y1-1] - pfs[x2][y1-1] - pfs[x1-1][y2];

        cout << ans << endl;
    }
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