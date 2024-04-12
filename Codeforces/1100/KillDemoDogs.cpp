// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   long long n ; cin >> n ;

   int mod = int(1e9 + 7);
   long long ans = (((n*(n+1)%mod)*(4*n-1))%mod * 337 )%mod;

   cout << ans << endl;
   return ;
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
   while(t--)solve();


   return 0;
}