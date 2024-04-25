// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   long long x , y ; cin >> x >> y;

   long long ans = 0;

   if(x == y)
   {
      ans = (y * y) - x + 1;
   }
   else if(y > x)
   {
      if(y&1)
      {
         ans = (y*y) - x + 1;
      }
      else 
      {
         ans = (y-1)*(y-1) + x;
      }
   }
   else 
   {
      if(x & 1)
      {
         ans = (x-1) * (x-1) + y;
      }
      else 
      {
         ans = (x * x) - y + 1;
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
   while(t--)solve();
}
