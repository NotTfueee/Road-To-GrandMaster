// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n ;
   vector<long long > v(n);

   long long c0 = 0 , c1 = 0;
   for(int i= 0 ; i < n ; ++i)
   {
      cin >> v[i];
      if(v[i] == 0)c0 ++ ;
      if(v[i] == 1) c1++;
   }

   long long ans = (1LL << c0) * c1;

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
   while(t--)solve();
}
