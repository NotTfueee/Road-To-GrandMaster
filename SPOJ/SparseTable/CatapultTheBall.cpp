// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
vector<vector<int>>sparse;

void build(int n , vector<int>&v)
{
   int k; 
   for(int i = 0 ; i < 32 ; ++i)
   {
      if((n >> i) & 1)k = i;
   }

   sparse.resize(n , vector<int>(k));

   for(int i = 0 ; i < n ; ++i)sparse[i][0] = v[i];

   for(int power = 1 ; power <= k ; ++power)
   {
      for(int idx = 0 ; idx + (1 << power) - 1 < n ; ++idx)
      {
         sparse[idx][power] = max(sparse[idx][power - 1] , sparse[idx + (1 << (power - 1))][power - 1]);
      }
   }
}

int query(int l , int r)
{
   int len = r - l + 1 , k ;

   for(int i = 0 ; i < 32 ; ++i)
   {
      if((len >> i ) & 1) k = i;
   }

   return max(sparse[l][k] , sparse[r - (1 << k) + 1][k]);
}

void solve()
{
   int n , q ; cin >> n >> q;
   vector<int>v(n);
   for(auto&i : v) cin >> i;

   build(n , v);
   
   long long count = 0;

   for(int i = 0 ; i < q ; ++i)
   {
      int l , r ; cin >> l >> r;
      l--;
      r -= 2;

      int q = query(l , r);

      if(q == v[l])count ++;
   }

   cout << count << endl;
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
