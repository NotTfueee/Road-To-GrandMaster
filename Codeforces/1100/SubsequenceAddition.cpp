// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n ; cin >> n;

   vector<int> c(n);

   for(auto & i : c) cin >> i;

   sort(c.begin() , c.end());
   
   if(n == 1)
   {
      if(c[0] != 1)
      {
         cout << "NO" << endl;
         return ;
      }
   }
   long long sum = 1;

   for(int i = 1 ; i < n ; ++i)
   {
      if(sum < c[i])
      {
         cout << "NO" << endl;
         return ;
      }

      sum += c[i];
   }

   cout << "YES" << endl;
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
   while(t-- ) solve();

   return 0;
}