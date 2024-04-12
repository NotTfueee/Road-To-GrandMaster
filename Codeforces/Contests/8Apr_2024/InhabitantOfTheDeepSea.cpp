// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{

   int n ; long long k , sum ; cin >> n >> k;
   vector<int> v(n);

   for(int i = 0 ; i < n;  ++i)
   {
      cin >> v[i];

      sum += v[i];
   }

   if(k >= sum)
   {
      cout << n << endl;
      return;
   }

   long long la = (k>>1) + (k % 2);
   long long ra = (k>>1);

   for(int i = 0 ; i < n && la > 0;  ++i)
   {
      if(la >= v[i])
      {
         la -= v[i];
         v[i] = 0;
      }
      else
      {
         v[i] -= la;
         la = 0;
      }
   }

   for(int i = n - 1 ; i >= 0 && ra > 0; --i)
   {
      if(ra >= v[i])
      {
         ra -= v[i];
         v[i] = 0;
      }
      else 
      {
         v[i] -= ra;
         ra  = 0;
      }
   }

   long long c = 0;

   for(auto i : v)
   {
      if(i == 0)c++;
   }

   cout << c << endl;

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