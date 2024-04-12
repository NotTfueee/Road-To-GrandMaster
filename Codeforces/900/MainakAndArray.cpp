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

   int mx = 0 , mn = 10001;

   for(int i = 0 ; i < n ; ++i)
   {
      cin >> v[i];

      mx = max(mx , v[i]);
      mn = min(mn , v[i]);
   }

   if(mn == v[0] || mx == v[n-1])
   {
      cout << mx - mn << endl;
      return;
   }

   int diff = 0 , small = 100001;

   for(int i = 0 ; i < n - 1 ; ++i)
   {
      diff = max(diff , v[i] - v[i+1]);
      small = min(small , v[i]);
   }

   cout << max( max(diff , mx - v[0]) , max(v[n-1] - v[0] , v[n-1] - small)) << endl;
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