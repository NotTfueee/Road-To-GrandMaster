// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void print(vector<int>&v)
{
   for(auto&i : v) cout << i << " ";
   cout << endl;
}
void solve()
{
   int n , q ; cin >> n >> q;

   vector<int> v(n);
   vector<long long> pfs(n);
   long long sum = 0;
   for(int i = 0 ; i < n ; ++i)
   {
      cin >> v[i];

      sum += v[i];

      pfs[i] = sum;
   }

   for(int i = 0 ; i < q; ++i)
   {
      int l , r; cin >> l >> r;
      l--; 
      r--;

      if(l == 0)
      {
         cout << pfs[r] << endl;
      }
      else
      {
         cout << pfs[r] - pfs[l-1] << endl;
      }
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

   solve();
}