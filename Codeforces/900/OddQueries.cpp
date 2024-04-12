// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n , q ; cin >> n >> q;
   vector<int>v(n+1) , pfs(n+1);

   long long sum = 0 ;

   for(int i = 1 ; i <= n ; ++i)
   {
      cin >> v[i];

      sum += v[i];
      pfs[i] = sum;
   }

   while(q--)
   {
      int l , r , x ; cin >> l >> r >> x;

      long long res = (pfs[n] - (pfs[r] - pfs[l-1])) + ((r-l+1) * x);

      if(res&1) cout << "YES" << endl;
      else cout << "NO" << endl;
   }

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