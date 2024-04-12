// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void print(map<int , int> &map)
{
   for(auto i: map)
   {
      cout << i.first << " " << i.second << endl; 
   }

   cout << endl;
   return;
}
void solve()
{
   int n ; cin >> n ;

   map<int , int> map;

   for(int i = 0 ; i < n ; ++i)
   {
      int t , c ; cin >> t >> c;

      if(map.find(c) != map.end())map[c] = min(map[c] , t);
      else map[c] = min(INT_MAX , t);
   }

   int mx = INT_MIN;
   
   for(auto i : map)
   {
      mx = max(mx , i.second);
   }

   cout << mx << endl;
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