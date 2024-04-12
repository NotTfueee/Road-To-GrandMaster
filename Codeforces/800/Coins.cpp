// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   long long n , k ; cin >> n >> k;

   if(!(n%k) || !(n%2))cout << "YES" << endl;
   else
   {
      n -= k;

      if(n % 2 == 1)cout << "NO" << endl;
      else cout << "YES" << endl;
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
   while(t--)solve();
   return 0;
}