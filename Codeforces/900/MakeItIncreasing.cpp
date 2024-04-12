// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n; cin >> n; 
   vector<int> v(n);

   for(auto&i : v) cin >> i ;

   int ans = 0;

   for(int i = n - 2; i >= 0 ; --i)
   {
      if(v[i + 1] == 0)
      {
         cout << -1 << endl;
         return;
      }

      while(v[i] >= v[i+1])
      {
         v[i] >>= 1;
         ans ++;
      }
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

   int t ; cin >> t;

   while(t--) solve();
   return 0;
}