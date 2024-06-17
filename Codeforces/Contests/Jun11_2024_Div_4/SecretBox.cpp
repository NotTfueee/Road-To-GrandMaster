
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{

    long long x , y , z , k ; cin >> x >> y >> z >> k;

    long long mx = 0;
    for(long long i = 1 ; i <= x ; ++i)
    {
        for(long long j = 1 ; j <= y ; ++j)
        {
            if(k % (i * j) == 0 && (k / (i * j )) <= z)
            {
                long long s1 = i , s2 = j , s3 = k / (i * j );

                long long c = ((x - s1 + 1) * (y - s2 + 1 ) * (z - s3 + 1));

                mx = max(mx , c);
            }
        }
    }

    cout << mx << endl;
    return;
}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t ; cin >> t;
    while(t--)solve();
}
