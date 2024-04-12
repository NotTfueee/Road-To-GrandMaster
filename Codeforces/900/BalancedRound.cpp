// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n , k ; cin >> n >> k;
   vector<int>v(n);
   for(auto & i : v) cin >> i;

   sort(v.begin() , v.end());

   int mx = 1 , start = 0;

   for(int i = 1 ; i<n ; ++i)
   {
      if(v[i] - v[i-1] > k)
      {
         mx = max(mx , i - start + 1);
         start = i;
      }
   }

   mx = max(mx , n - start + 1);

   cout << n - mx + 1 << endl;
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