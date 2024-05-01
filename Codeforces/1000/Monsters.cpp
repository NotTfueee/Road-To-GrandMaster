//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , k ; cin >> n >> k;

    vector<int> v(n);

    for(auto&i : v) cin >> i;

    map<int , vector<int>>map;
    for(int i = 0 ; i < n ; ++i)
    {
        int md = v[i] % k ;

        if(md == 0)
        {
            cout << i + 1 << " ";
            continue;
        }

        map[md].push_back(i+1);
    }

    for(auto it = map.rbegin() ; it != map.rend() ; ++it)
    {
        auto id = it->second;
        for(auto j : id)cout << j << " ";
    }

    cout << endl;
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
