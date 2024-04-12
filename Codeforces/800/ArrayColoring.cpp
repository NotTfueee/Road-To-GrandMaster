// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n ; cin >> n;

   vector<int> v(n);

   int sum = 0;
   for(auto&i : v)cin >> i;

   sort(v.begin() , v.end());

   for(int i = 0 ; i < n ; ++i)
   {
      sum += v[i];
   }

   if(sum&1)cout << "NO" << endl;
   else cout << "YES" << endl;

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