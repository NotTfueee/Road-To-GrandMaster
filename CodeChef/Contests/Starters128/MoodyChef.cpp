// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n , l , r ; cin >> n >> l >> r;

   vector<int> v(n);

   for(auto&i : v) cin >> i ;

   int mx = 0 , mn = 0 , ans = 0;

   for(int i = 0 ; i < n ; ++i)
   {
      if(v[i] >= l && v[i] <= r)ans ++;
      else ans--;

      mx = max(mx , ans);
      mn = min(mn , ans);

   }

   cout << mx << " " << mn << endl;
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
   while(t-- ) solve();
}