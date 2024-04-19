// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   long long n , h ; cin >> n >> h;

   vector<long long > v(n);

   for(auto&i : v)cin >> i;

   long long l = 1 , r = 1e18 , ans =1;   
   
   while(l <= r)
   {
      long long mid = ((l + r) >> 1);

      long long sum = mid;

      for(int i = 0 ; i < n - 1; ++i)
      {
         sum += min(mid , v[i+1] - v[i]);
      }

      if(sum < h) l = mid + 1;
      else 
      {
         ans = mid;
         r = mid - 1;
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

   int t; cin >> t;

   while(t--) solve();
}
