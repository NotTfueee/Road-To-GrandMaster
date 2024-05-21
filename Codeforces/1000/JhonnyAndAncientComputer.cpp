//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    long long a , b ; cin >> a >> b;

    if(a == b)
    {
        cout << 0 << endl;
        return;
    }

    long long c2a = 0 , c2b = 0 , c = 0;

    while(a % 2 == 0)
    {
        c2a++;
        a /= 2;
    }

    while(b % 2 == 0)
    {
        c2b++;
        b /= 2;
    }

    if(a != b)
    {
        cout << -1 << endl;
        return;
    }

    long long diff = abs(c2a - c2b);

    if(diff >= 3)
    {
        long long r = (diff / 3);
        c += r;

        diff -= (3*r);
    }

    if(diff >= 2)
    {
        long long r = (diff >> 1LL);
        c += r;

        diff -= (2 * r);
    }

    if(diff > 0)c++;

    cout << c << endl;
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
