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

    int mn = INT_MAX , c2 = 0;

    for(int i = 0 ; i < n; ++i)
    {
        if(v[i] % k == 0)
        {
            cout << 0 << endl;
            return;
        }

        if(v[i] % 2 == 0)c2++;

        int r = k - (v[i] % k);

        mn = min(mn , r);
    }

    if(k == 4)
    {
        if(c2 >= 2)
        {
            cout << 0 << endl;
            return;
        }
        else if(c2 == 1)
        {
            cout << min(mn , 1) << endl;
        }
        else cout << min(mn , 2) << endl;

        return;
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
