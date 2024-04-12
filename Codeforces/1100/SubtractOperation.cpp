// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n , k ; cin >> n >> k ;

   vector<int>v(n);

   for(auto &i : v)cin >> i;

   set<int> set;
   
   for(auto i : v)set.insert(i);

   for(int i = 0 ; i < n ; ++i)
   {
      int val = v[i] - k;

      if(set.find(val) != set.end())
      {
         cout << "YES" << endl;
         return ;
      }
   }

   cout << "NO" << endl;
   
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

   while(t--) solve();

   return 0;
}