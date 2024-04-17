// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n ;
    vector<int> v(n);

    for(auto&i : v) cin >> i;

    if(n == 1)
    {
        cout << "Yes" << endl;
        return;
    }

    int mn = INT_MAX , mx = 0;
    for(int i = 1 ; i < n ; ++i)
    {
        mn = min(mn , v[i]);
        mx = max(mx , v[i]);
    }

    if(v[0] > mn || v[n-1] > mn || v[0] != v[n-1])
    {
        cout << "No" << endl;
        return;
    }
    else cout << "Yes" << endl;

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

   while(t--) solve();

}
