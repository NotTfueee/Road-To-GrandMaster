//File Created by -- > ANRAG
//Created On -- > 23/07/24,Tue,Jul
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n ;
    long long k ; cin >> k;

    vector<long long> v(n);
    for(auto&i : v)cin >> i;

    sort(v.begin() , v.end());

    long long ans = 0;

    for(int i = 0 ; i < n ; )
    {
        long long j = i ;
        while(j < n && v[j] == v[i])j++;
        long long l = j;
        while(l < n && v[l] == v[i] + 1)l++;

        for(int c = 0 ; c <= j - i ; ++c)
        {
            if(c * v[i] > k)continue;
            long long val = c * v[i];

            int t = min(((k - val) / (v[i] + 1)) , l - j);

            val += (t * (v[i] + 1));

            ans = max(ans , val);
        }

        i = j ;
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
