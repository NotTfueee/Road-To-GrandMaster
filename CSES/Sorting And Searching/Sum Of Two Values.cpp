#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'



void solve()
{
    int n , x;
    cin >> n >> x;

    vector<long long> v (n+1);
    map<long long , int > map;

    for(int i = 1 ; i <= n ; ++i)
    {
        long long val ; 
        cin >> val;

        v[i] = val;

        map[v[i]] = i;
    }

    for(int i = 1 ; i <= n ; ++i)
    {
        long long diff = x - v[i];

        if(map.find(diff) != map.end() && map[diff] != i)
        {
            cout << map[diff] << " " << i;
            return;
        }
    }

    cout << "IMPOSSIBLE" << endl;
}


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ZOOM;

    solve();

    return 0;

}