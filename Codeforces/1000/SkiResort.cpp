//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    long long n , k , q ; cin >> n >> k >> q;
    vector<long long>v(n);

    for(auto&i : v) cin >> i;

    long long ans = 0;

    for(long long i = 0 ; i < n ; ++i)
    {
        long long sz = 0;
        while(i < n && v[i] <= q)
        {
            sz++;
            i++;
        }

        if(sz >= k)
        {
            long long extra = sz - k + 1;

            ans += ((extra * (extra + 1)) >> 1);
        }
    }

    cout << ans << endl;
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
