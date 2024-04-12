// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int x , k ; cin >> x >> k ;

   if(k > x || (x%k))
   {
      cout << 1 << endl;
      cout << x << endl;
   }
   else
   {
      cout << 2 << endl;
      cout << k+1 << " " << x - (k+1) << endl;
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