// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   long long n , q ; cin >> n >> q;
   vector<long long> v(n),temp(n, 0);

   for(auto&i : v) cin >> i;

   while(q--)
   {
      int l , r ; cin >> l >> r;
      l--;

      temp[l]++;
      if(r < n)temp[r]--;
   }

   for(int i = 1 ; i < n ; ++i)
   {
      temp[i] = temp[i-1] + temp[i];
   }

   sort(temp.begin() , temp.end());
   sort(v.begin() , v.end());

   long long sum = 0;
   for(int i = 0 ; i < n ; ++i)
   {
      sum += (temp[i] * v[i]);
   }

   cout << sum << endl;
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
   return 0;
}