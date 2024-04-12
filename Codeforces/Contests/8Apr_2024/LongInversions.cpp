// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
bool check(int k , string s)
{
   int n = s.size();

   vector<int> pfs(n+1 , 0);

   for(int i = 0 ; i < n ; ++i)
   {
      if((s[i] - '0' + pfs[i]) % 2 == 0)
      {
         if(n - i < k)break;

         pfs[i] += 1;
         pfs[i + k] -= 1;
      }

      if(i + 1 < n )pfs[i+1] += pfs[i];
   }

   for(int i = 0 ; i < n ; ++i)
   {
      if((s[i] - '0' + pfs[i]) % 2 == 0)return false;
   }

   return true;
}
void solve()
{
   int n ; string s ; cin >> n >> s;

   int ans = 0 ; 

   for(int i = 1 ; i <= n ; ++i)
   {
      if(check(i , s))
      {
         ans = max(i , ans);
      }
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

   while(t--) solve();
}