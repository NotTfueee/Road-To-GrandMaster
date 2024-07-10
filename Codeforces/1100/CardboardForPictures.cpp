//File Created by -- > ANRAG
//Created On -- > 25/06/24,Tue,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    long long n , c ; cin >> n >> c;
    vector<long long> s(n);
    for(auto&i : s) cin >> i;

    long long l = 1 , r = 1e9 ;

    while(l <= r)
    {
        long long md = (l + r) >> 1LL , sum = 0;

        for(int i = 0 ; i < n ; ++i)
        {
            long long val = (s[i] + (md << 1));

            sum += (val * val);

            if(sum > c)break;
        }

        if(sum > c) r = md -1;
        else l = md +1;
    }

    cout << l-1 << endl;

}
/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)solve();
}
