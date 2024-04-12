// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   long long  n ; cin >> n ;

   if((n&1) || n <= 3)
   {
      cout << -1 << endl;
      return;
   }

   if(n % 6 == 0)cout << n / 6 << " ";
   else if(n % 6 == 2) cout << 2 + (n - 8)/6 << " ";
   else cout << 1 + (n - 4)/6 << " ";
   cout << n / 4 << endl;
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