//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
const int MOD = 998244353;

long long getCount(long long n , int x)
{
    long long seg = (n / (1LL << x));
    long long on = (seg >> 1LL) * (1LL << x);
    long long rem = (n % (1LL << x));

    if(seg & 1LL)
    {
        on += rem;
    }

    return on;
}
void solve()
{
    long long n , m ; cin >> n >> m;
    long long ans = 0;

    for(int i = 63 ; i >= 0 ; --i)
    {
        if((m >> i) & 1LL)
        {
            ans = (ans + getCount(n+1 , i)) % MOD;
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


  solve();
}
