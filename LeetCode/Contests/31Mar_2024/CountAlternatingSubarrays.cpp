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

   int start = 0 , prev = v[0];
   long long ans = 0;
   for(int i = 1 ; i < n ; ++i)
   {
      if(v[i] != prev)
      {
         prev = v[i];
      }
      else
      {
         int len = (i - start);

         ans += ((len * (len + 1))>>1);
         start = i;
         prev = v[i];
      }
   }

   ans += ((n - start) * ((n-start) + 1)>>1);
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

   while(t--) solve();
   return 0;
}