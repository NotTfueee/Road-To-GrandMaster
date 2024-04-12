// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n , x ; cin >> n >> x;

   vector<int> v(n);

   for(auto&i : v) cin >> i;

   sort(v.begin() , v.end());

   int p2 = (x - v[n-1]) * 2;

   int p1 = INT_MIN , prev = 0;
   for(int i = 0 ; i < n ; ++i)
   {
      int diff = v[i] - prev;

      p1 = max(p1 , diff);

      prev = v[i];
   }
   cout << max(p1 , p2) << endl;
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