// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
  int n , k ; cin >> n >> k;
  vector<int>v(n);

  map<int , int>map;

  for(int i = 0 ; i < n ; ++i)
  {
      cin >> v[i];

      map[v[i]]++;
  } 

  int f = 1;
  for(auto i : map)
  {
      if(i.second >= k)
      {
         f = 0;
         break;
      }
  }

  if(f == 1)
  {
      cout << n << endl;
      return;
  }
  else cout << k - 1 << endl;

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

   int t; cin >> t ;
   while(t--)solve();
}