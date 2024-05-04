// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   long long suma = 0 , sumb = 0;
   for(int i = 1 ; i <= 9 ; ++i)
   {
      int x ; cin >> x;
      suma += x;
   }

   for(int i = 1 ; i <= 8 ; ++i)
   {
      int x ; cin >> x;
      sumb += x;
   }

   cout << abs(suma - sumb) + 1 << endl;
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

   solve();
}