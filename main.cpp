// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n ;

   int two = 0 , three = 0;

   while(n > 1 && n % 2 == 0)
   {
      n /= 2;
      two++;
   }

   while(n > 1 && n % 3 == 0)
   {
      n /= 3;
      three++;
   }

   if(n > 1 || two > three)cout << -1 << endl;
   else
   {
      int needed = three - two;

      int total = three + two + needed ;


      cout << (total >> 1) + needed << endl;
   }
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
   while(t--)solve();
}
