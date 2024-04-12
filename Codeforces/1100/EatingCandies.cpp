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

   for(auto &i : v) cin >> i;

   int l = 0 , r = n -1 , a = v[l] , b = v[r] , ans = 0;

   while(l < r)
   {
      if(a == b)
      {
         ans = max(ans , n-r + l + 1);
      }

      if(a <= b)
      {
         l++;
         a += v[l];
      }
      else if(b < a)
      {
         r--;
         b += v[r];
      }
   }

   cout << ans << endl;

}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int t ; cin >> t; 

   while(t--) solve();

   return 0;
}