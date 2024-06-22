//File Created by -- > ANRAG
//Created On -- > 22/06/24,Thu,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
vector<int> getFactors(int n)
{
    vector<int> f;
    for(int i = 1 ; i * i <= n ; ++i)
    {
        if(n % i == 0)
        {
            f.push_back(i);

            if((n / i) != i)f.push_back((n/ i));
        }
    }
    return f;
}


 void solve()
{
     int n ; cin >> n;
     vector<int>v(n);
     for(auto&i : v) cin >> i;

     auto f = getFactors(n);
     long long ans = 0;
     for(auto k : f)
     {
         long long mx = 0 , mn = LONG_LONG_MAX , start = 0 , sum = 0;

         for(int i = 0 ; i < n ; ++i)
         {
             sum += v[i];
             if(i - start == k - 1)
             {
                 mx = max(mx , sum);
                 mn = min(mn , sum);
                 sum = 0;
                 start = i + 1;
             }
         }

         ans = max(mx - mn , ans);
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
