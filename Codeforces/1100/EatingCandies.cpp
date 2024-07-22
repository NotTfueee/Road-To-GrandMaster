//File Created by -- > ANRAG
//Created On -- > 20/07/24,Sat,Jul
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n;
    vector<int> v(n);
    for(auto &i : v) cin >> i;

    long long mx = 0 , sumL = v[0] , sumR = v[n-1] , l = 0 , r = n - 1;

    while(l < r)
    {
        if(sumL == sumR)
        {
            mx = max(mx , (l + 1) + (n - r));
            l++;
            sumL += v[l];
        }
        else if(sumL < sumR)
        {
            l++;
            sumL += v[l];
        }
        else
        {
            r--;
            sumR += v[r];
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

    int t;
    cin >> t;
    while (t--)solve();
}
