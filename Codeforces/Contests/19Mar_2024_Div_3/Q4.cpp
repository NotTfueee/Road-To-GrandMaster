// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , m ; cin >> n >> m;

    vector<long long> a(n) , b(n);

    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;

    long long sum = 0 , ans = LLONG_MAX;

    for(int i = n - 1; i >= 0 ; --i)
    {
        if(i < m)ans = min(ans , sum + a[i]);
        sum += min(a[i] , b[i]);
    }

    cout << ans << endl;
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
   while(t-- ) solve();

   return 0;
}