// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n , m , k ; cin >> n >> m >> k;

   vector<int>a(n) , b(m);
   for(auto&i : a) cin >> i;

   map<int, int>mapb , mapa ;
   for(int i = 0 ; i < m ; ++i)
   {
      cin >> b[i];
      mapb[b[i]]++;
   }

   for(int i = 0 ; i < m ; ++i)mapa[a[i]]++;

   int ans = 0 , c = 0;
   
   for(auto [e , _] : mapa) c += min(mapa[e] , mapb[e]);

   ans += (c >= k);

   for(int i = m ; i < n ; ++i)
   {
      mapa[a[i-m]]--;

      if(mapb[a[i-m]] > mapa[a[i-m]])c--;

      mapa[a[i]]++;

      if(mapa[a[i]] <= mapb[a[i]])c++;

      if(c >= k)ans++;
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
}