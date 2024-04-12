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

   for(auto&i : v)cin >> i;

   int mn = INT_MAX;
   for(int i = 0 ; i < n-1 ;++i)
   {
      if(v[i] > v[i+1])
      {
         cout << 0 << endl;
         return;
      }

      mn = min(mn , v[i+1] - v[i]);
   }

   cout << (mn >> 1) + 1<< endl;
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