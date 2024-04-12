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

   long long sum1 = 0 , sum2 = 0;

   for(int i = 0 ; i < n ; ++i)
   {
      cin >> v[i];

      sum1 += v[i];

      sum2 += (ceil(v[i]/double(x)));
   }

   sum1 = (ceil(sum1/ double(x)));

   cout << min(sum1 , sum2) << " " << max(sum1 , sum2) << endl;
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