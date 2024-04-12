// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n ; cin >> n ;

   vector<int>v(n);
   for(auto &i : v)cin >> i;

   vector<int> us;
   
   for(int i = 0 ; i < n ; ++i)
   {
      if(v[i] != i)us.push_back(v[i]);
   }

   int ans = us[0];
   for(int i = 1 ; i < us.size() ; ++i)
   {
      ans = ans & us[i];
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
   while(t--)solve();


   return 0;
}