// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n;
   vector<int> v(n);

   int e = 0 , o = 0;

   for(int i = 0 ; i <n ; ++i)
   {
      cin >> v[i];

      if(v[i]&1)o++;
      else e++;
   }

   int f;
   if(o > e)f = 0 ;
   else f = 1;

   for(int i = 0 ; i < n ; ++i)
   {
      if(f == 1)
      {
         if(v[i]&1)
         {
            cout << i + 1 << endl;
            return;
         }
      }

      if(f == 0)
      {
         if(!(v[i]&1))
         {
            cout << i + 1 << endl;
            return;
         }
      }
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

   solve();
   return 0;
}