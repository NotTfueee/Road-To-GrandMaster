//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    long long n; cin >> n ;
    vector<long long> v(n);

    for(auto&i : v) cin >> i;

    long long mx = 0 , c = 0  , total = (n * (n + 1))/2 , cOdd = 0;

    for(long long i = 0 ; i < n ; ++i)
    {
        if(v[i] & 1)c++;
        else
        {
            cOdd += (c * (c + 1)) / 2;
            c = 0;
        }

        mx = max(mx , c);
    }

    if(c)
    {
        cOdd += (c * (c+ 1)) / 2;
        mx = max(mx , c);
    }

    if(mx == 0)
    {
        cout << total << endl;
        return;
    }

    total -= cOdd;

    if(mx <= 2)
    {
        cout << total + mx << endl;
        return;
    }

    long long ans = 0;

    for(long long i = 0 ; i < mx ; ++i)
    {
        ans = max(ans , (mx - i) * (i + 1));
    }

    cout << total + ans << endl;
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
