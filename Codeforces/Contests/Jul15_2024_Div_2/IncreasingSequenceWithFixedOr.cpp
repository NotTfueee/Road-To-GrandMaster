//File Created by -- > ANRAG
//Created On -- > 15/07/24,Mon,Jul
#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    long long n ; cin >> n ;
    vector<long long> ans;
    ans.push_back(n);

    for(int i = 0 ; i < 64 ; ++i)
    {
        if((n >> i) & 1)
        {
            long long num = n ^ (1LL << i);
            if(num > 0)ans.push_back(num);
        }
    }

    cout << ans.size() << endl;
    reverse(ans.begin() , ans.end());
    for(auto i : ans)cout << i << " ";
    cout << endl;
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
