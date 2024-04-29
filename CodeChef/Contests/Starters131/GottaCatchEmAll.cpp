// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n , x , y ; cin >> n >> x >> y;

   vector<int> v(n);

   for(auto&i : v) cin >> i;

   long long sum = 0;

   for(int i = 0 ; i < n ; ++i)
   {
      sum += min(v[i] * x , y);
   }

   cout << sum << endl;
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
