// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n ; cin >> n;
   string s ; cin >> s;

   auto check = s.find("...");

   if(check != string::npos)
   {
      cout << 2 << endl;
      return;
   }

   int ans = 0;
   for(char c : s)
   {
      if(c == '.')ans++;
   }

   cout << ans << endl;
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