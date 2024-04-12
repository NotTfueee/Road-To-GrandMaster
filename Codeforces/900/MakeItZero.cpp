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
   for(auto &i : v) cin >> i;

   int ans = v[0];
   for(int i = 1 ; i < n ; ++i)
   {
      ans ^= v[i];
   }

   if(ans == 0)
   {
      cout << 1 << endl;
      cout << 1 << " " << n << endl;
      return;
   }

   if(!(n&1))
   {
      cout << 2 << endl;
      cout << 1 << " " << n << endl;
      cout << 1 << " " << n << endl;
   }
   else 
   {
      cout << 4 << endl;
      cout << 1 << " " << n << endl;
      cout << 1 << " " << n -1 << endl;
      cout << n-1 << " " << n  << endl;
      cout << n-1 << " " << n << endl;
   }
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