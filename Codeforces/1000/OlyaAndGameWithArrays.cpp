//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n;

    priority_queue<pair<int , int>> pq;

    for(int i = 0 ; i < n ; ++i)
    {
        int m ; cin >> m;

        vector<int> a(m);

        for(int j = 0 ; j < m ; ++j)cin >> a[j];

        sort(a.begin() , a.end());

        pq.push({a[1] , a[0]});
    }

    long long sum = 0;
    int mn = INT_MAX;

    while(pq.size() > 1)
    {
        sum += pq.top().first;
        mn = min(mn , pq.top().second);
        pq.pop();
    }

    mn = min(pq.top().second , mn);

    sum += mn;

    cout << sum << endl;
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
