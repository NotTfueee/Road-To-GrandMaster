// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
   
void solve()
{
   long long a , b; cin >> a >> b;

   if(a == b)
   {
      cout << "0 0" << endl;
      return;
   }

   long long diff = abs(a - b);
   long long moves = min(a % diff , diff - (a % diff));
   cout << diff << " " << moves << endl;
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
