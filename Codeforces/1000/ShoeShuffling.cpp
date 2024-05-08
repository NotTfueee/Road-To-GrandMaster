//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n;
    vector<int>v(n);

    map<int, pair<int , int>> map;

    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i];

        if(map.find(v[i]) == map.end())
        {
            map[v[i]].first = i;
            map[v[i]].second = i;
        }
        map[v[i]].second = i;
    }

    for(auto i : map)
    {
        if(i.second.second - i.second.first + 1 == 1)
        {
            cout << -1 << endl;
            return;
        }
    }

    for(auto i : map)
    {
        int si = i.second.first , ei = i.second.second;
        int len = ei - si + 1;

        if(len & 1)
        {
            cout << ei + 1<< " ";
            for(int i = si ; i < ei ; ++i)cout << i+1 << " ";
        }
        else 
        {
            for(int i = ei ; i >= si ; --i)cout << i + 1 << " ";
        }
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
