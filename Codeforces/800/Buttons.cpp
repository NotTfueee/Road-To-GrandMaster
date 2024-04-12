// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int a, b , c ; cin >> a >> b >> c;

   if(c & 1)
   {
      b -= 1;

      if(b >= a)
      {
         cout << "Second" << endl;
      }
      else cout << "First" << endl;
   }
   else
   {
      a -= 1;

      if(a >= b)cout << "First" << endl;
      else cout << "Second" << endl;
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
   while(t-- ) solve();

   return 0;
}