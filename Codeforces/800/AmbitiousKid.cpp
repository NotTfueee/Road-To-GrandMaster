// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n ; cin >> n ;

   vector<int> v(n);

   for(auto &i : v)cin >> i;

   int mn = INT_MAX;
   for(int i = 0 ; i < n ; ++i)
   {
      if(v[i] == 0)
      {
         cout << 0 << endl;
         return;
      }

      mn = min(mn , abs(v[i]));
   }

   cout << mn << endl;
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int t  = 1;
   while(t-- ) solve();

   return 0;
}