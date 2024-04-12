// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void print(vector<int>&v)
{
   for(auto i : v) cout << i << " ";
      cout << endl;
   return;
}

void solve()
{
   int n , k ; cin >> n >> k;

   vector<int> v(n);

   for(int i = 0 ; i < n; ++i)
   {
      cin >> v[i];

      if(v[i] % k == 0)
      {
         cout << v[i] / k << " ";
      }
   }

   cout << endl;
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