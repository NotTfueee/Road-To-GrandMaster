// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n ;
   string s; cin >> s;

   int mx = 0 , c = 1;
   char prev = s[0];

   for(int i = 1; i < n ; ++i)
   {
      if(s[i] != prev)
      {
         mx = max(mx , c+1);
         c = 1;
         prev = s[i];
      }
      else c ++;
   }

   mx = max (mx , c + 1);
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

   int t ; cin >> t;
   while(t--) solve();
   return 0;
}