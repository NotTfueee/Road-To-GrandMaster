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
   map<int , int> map;

   for(int i = 0 ; i < n ; ++i)
   {
      cin >> v[i];

      map[v[i]]++;
   }

   int mx = 0;
   for(auto i : map)
   {
      mx = max(mx , i.second);
   }
   
   if(mx == n)
   {
      cout << 0 << endl;
      return ;
   }


   int ans = 1;

   while(mx <= n)
   {
      if(mx + mx >= n)
      {
         ans += (n - mx);
         cout << ans << endl;
         return;
      }

      ans += mx;
      mx *= 2;
      ans++;
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