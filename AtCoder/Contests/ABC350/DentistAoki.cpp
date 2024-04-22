// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n , q ; cin >> n >> q;

   vector<int> v(q);

  for(int i = 0 ; i < q; ++i)cin >> v[i];

   set<int>set;
   int count = 0;

   for(int i = 0; i < q ; ++i)
   {
      if(set.find(v[i]) == set.end())
      {
         count ++;
         set.insert(v[i]);
      }
      else
      {
         count --;
         set.erase(v[i]);
      }
   }

   cout << n - count << endl;
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
}
