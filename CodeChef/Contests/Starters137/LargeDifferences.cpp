//File Created by -- > ANRAG
//Created On -- > 05/06/24,Wed,Jun

#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n , k ; cin >> n >> k;
    vector<int>v(n);
    for(auto&i : v) cin >> i;

    long long curr = 0;
    for(int i = 0 ; i < n - 1; ++i)curr += abs(v[i] - v[i+1]);

    long long mx = curr;
    for(int i = 1 ; i <= 2 ; ++i)
    {
        int val ;
        if(i == 1) val = 1;
        else val = k;

        for(int j = 0 ; j < n ; ++j)
        {
            int temp = v[j];
            v[j] = val;
            long long sum = 0;
            for(int idx = 0 ; idx < n - 1 ; ++idx)
            {
                sum += abs(v[idx] - v[idx + 1]);
            }
            v[j] = temp;
            mx = max(mx , sum);
        }
    }

    cout <<  mx << endl;
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
