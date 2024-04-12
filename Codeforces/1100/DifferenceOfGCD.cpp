// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n , l , r ; cin >> n >> l >> r;

   vector<int> v;

   for(int i = 1 ; i <= n ; ++i)
   {
      int diff = r / i;

      if(diff*i >= l && diff*i <= r)
      {
         v.push_back(diff*i);
      }
      else
      {
         cout << "NO" << endl;
         return;
      }
   }

   cout << "YES" << endl;
   for(auto i : v) cout << i << " ";
   cout << endl;
   return ;
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


   return 0;
}