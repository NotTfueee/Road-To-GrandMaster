//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n, k ; cin >> n >> k;
    vector<int> v(n+1);

    map<int , int> map;

    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> v[i];
        map[v[i]] = i;
    }

    set<int> set;

    for(int i = 1 ; i <= n && int(set.size()) <= k ; ++i)
    {
        if(v[i] >= 1 && v[i] <= k )set.insert(i);
    }

    int mn = (*set.rbegin()) - (*set.begin());

    int num = 1;
    for(int i = k + 1 ; i <= n ; ++i)
    {
        int idx = map[num];
        set.erase(idx);

        num ++;

        set.insert(map[i]);

        mn = min(mn , (*set.rbegin()) - (*set.begin()));
    }

    cout << mn << endl;
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
