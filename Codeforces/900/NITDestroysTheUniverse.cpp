// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n; cin >> n ;
   vector<int>v(n);

   for(auto&i : v) cin >> i;

   int l = -1 , r = -1;

   for(int i = 0 ; i < n ; ++i)
   {
      if(v[i] != 0)
      {
         l = i;
         break;
      }
   }

   for(int i = n-1 ; i >= 0 ; --i)
   {
      if(v[i] != 0)
      {
         r = i;
         break;
      }
   }

   if(l == -1 && r == -1)
   {
      cout << 0 << endl;
      return;
   }

   for(int i = l ; i <= r ; ++i)
   {
      if(v[i] == 0)
      {
         cout << 2 << endl;
         return;
      }
   }

   cout << 1 << endl;
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