//File Created by -- > ANRAG
//Created On -- > 25/06/24,Tue,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
int n; cin >> n ;
    vector<int> v(n);
    for(auto&i : v) cin >> i;

    int p = 0 , neg = 0 , mn = INT_MAX;
    long long sum = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        if(v[i] >= 0)p++;
        else neg++;

        sum += abs(v[i]);
        mn = min(abs(v[i]) , mn);
    }

    if((neg & 1))cout << sum - (mn << 1) << endl;
    else cout << sum << endl;

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
