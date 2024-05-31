//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
int msb(long long n)
{
    for(int i = 63 ; i >= 0 ; --i)
    {
        if((n >> i) & 1)
        {
            return i;
        }
    }
    return -1;
}

void solve()
{
    long long n , m ; cin >> n >> m;

    if(m == 0)
    {
        cout << n << endl;
        return;
    }

    long long l = max(n - m , 0LL) , r = n + m , ans = 0;

    int msbl = msb(l) , msbr = msb(r);

    while(msbl == msbr)
    {
        long long num = (1LL << msbl);

        ans += num;

        l -= num;
        r -= num;

        msbl = msb(l);
        msbr = msb(r);
    }

    msbl = max(msbl , msbr) + 1;

    long long num = (1LL << msbl) - 1;

    cout << (ans | num) << endl;
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
