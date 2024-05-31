//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

void solve()
{
    int n ; cin >> n;
    vector<int>a(n) , b(n+1);

    for(auto&i : a) cin >> i;
    for(auto&i : b) cin >> i;

    long long ans = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        ans += abs(a[i] - b[i]);
    }

    long long last = b[n] , mn = INT_MAX , f = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        if((last > a[i] && last < b[i]) || (last > b[i] && last < a[i]))f = 1;

        mn = min(mn , abs(last - a[i]));
        mn = min(mn , abs(last - b[i]));
    }

    if(f)ans++;
    else 
    {
        ans += mn + 1;
    }

    cout << ans << endl;
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


  solve();
}
