//File Created by -- > ANRAG
//Created On -- > 24/06/24,Mon,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n , k ; cin >> n >> k;
    vector<long long> v(n) , pfs(n+1);
    for(auto&i : v) cin >> i;
    sort(v.begin() , v.end());

    long long sum = 0 , ans = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        sum += v[i];
        pfs[i+1] = sum;
    }

    /* here i = 0 , represents that we are removing 0mx elements and removing all 2*k minimum
      elements
      i = 1 represent that we are removing 1 max element and 2*(k - i) min elements

      we need to do this k + 1 times as for k = 3 we can remove the elements in the following way
      (3mx , 0mn) (2mx , 1mn) (1mx , 2mn) (0mx , 3mn)
    */
    for(int i = 0 ; i <= k ; ++i)
    {
        ans = max(ans , pfs[n-i] - pfs[2*(k - i)]);
    }

    cout << ans << endl;
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
