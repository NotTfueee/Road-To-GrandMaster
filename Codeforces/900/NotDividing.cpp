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

   for(auto &i : v) cin >> i;

   int prev = v[0];
   
   if(prev == 1)v[0]++;

   for(int i = 1 ; i < n ; ++i)
   {
      if(v[i] == prev || v[i] == 1)
      {
         v[i]++;
         prev = v[i];
      }
   }

   for(int i = 0 ; i < n-1 ; ++i)
   {
      if(v[i+1] % v[i] == 0)
      {
         v[i+1]++;
      }
   }

   for(auto i : v) cout << i << " " ;
   cout << endl;
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