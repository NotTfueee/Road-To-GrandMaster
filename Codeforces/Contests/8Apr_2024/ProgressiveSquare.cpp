// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void print(vector<int>& v)
{
   for(auto&i : v)cout << i << " ";
   cout << endl;
return;
}

void solve()
{
   long long n , c, d ; cin >> n >> c >> d;

   vector< vector<int> > grid (n , vector<int> (n , 0));
   vector<int>v(n*n);
   for(auto&i : v) cin >> i;

   sort(v.begin() , v.end());
   
   grid[0][0] = v[0];
   vector<int> check;

    check.push_back(v[0]);

   for(int j = 1 ; j < n ; ++j)
   {
      grid[0][j] = grid[0][j-1] + d;
      check.push_back(grid[0][j]);
   }

   for(int i = 1 ; i < n ; ++i)
   {
      grid[i][0] = grid[i-1][0] + c;
      check.push_back(grid[i][0]);
   }

   for(int i = 1 ; i < n ; ++i)
   {
      for(int j = 1 ; j < n ; ++j)
      {
         grid[i][j] = grid[i][j-1] + d;
         check.push_back(grid[i][j]);
      }
   }

   sort(check.begin() , check.end());

   for(int i = 0 ; i < n*n ; ++i)
   {
      if(check[i] != v[i])
      {
         cout << "NO" << endl;
         return;
      }
   }

   cout << "YES" << endl;
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
}