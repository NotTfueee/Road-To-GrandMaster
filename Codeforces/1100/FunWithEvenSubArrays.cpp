/ Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n ; cin >> n;

   vector<int> v(n);
   for(auto&i : v)cin >> i;

   int c = 0 , ans = 0 , i = n - 1;

   while(i >= 0)
   {
      while(i >= 0 && v[i] == v[n-1])
      {
         c++;
         i--;
      }

      if(i < 0)break;

      i -= c;
      ans++;
      c *= 2;
   }

   cout << ans << endl;
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