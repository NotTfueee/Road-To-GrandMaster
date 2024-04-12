// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n ; cin >> n ;
   vector<int>v(n);

   for(int i = 0 ; i < n ; ++i) cin >> v[i];

   map<int , int> map;

   for(int i = 0 ; i < n ; ++i)map[v[i]]++;

   for(int i = n - 1 ; i >= 0 ; --i)
   {
      while(i > 0 && v[i-1] == v[i])
      {
         map[v[i]]--;
         i--;
      }
      map[v[i]]--;

      if(map[v[i]] == 0)map.erase(v[i]);
      else if(map.count(v[i]) > 0)
      {
         cout << map.size() << endl;
         return;
      }

      if(i > 0 && v[i-1] > v[i])
      {
         cout << map.size() << endl;
         return;
      }
   }

   cout << 0 << endl;
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
   while(t-- ) solve();

   return 0;
}