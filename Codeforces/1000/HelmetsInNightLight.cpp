//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    long long n , p ; cin >> n >> p;
    vector<long long> a(n) , b(n);

    for(auto&i : a) cin >> i;
    for(auto&i : b) cin >> i;

    long long sum = n * p;

    vector<pair<long long , long long>> cost(n);

    for(long long i = 0 ; i < n ;++i)
    {
        cost[i] = {b[i] , a[i]};
    }

    sort(cost.begin() , cost.end());
    long long ans = p, count = 1;

    for(long long i = 0 ; i < n && count < n ; ++i)
    {
        long long currCost = cost[i].first;
        long long share = cost[i].second;

        long long needed = (n - count);

        if(share <= needed)
        {
            ans += (min(currCost * share , p * share));
            count += share;
        }
        else
        {
            ans += (min(currCost*needed , p * needed));
            count += needed;
        }
    }

    cout << min(ans , sum) << endl;
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


    int t ; cin >> t;
    while(t--)solve();
}
