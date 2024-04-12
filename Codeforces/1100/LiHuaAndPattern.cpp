// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n , k ; cin >> n >> k;

   vector<vector<int>> grid(n , vector<int>(n , 0));

   for(int i = 0 ; i < n ; ++i)
   {
      for(int j = 0 ; j < n ; ++j)cin >> grid[i][j];
   }

   int sum = 0;

   for(int i = 0 ; i < n ;++i)
   {
      for(int j = 0 ; j < n ;++j)
      {
         if(grid[i][j] != grid[n-1-i][n-1-j])sum++;
      }
   }

   sum /= 2;

   if(sum > k)cout << "NO" << endl;
   else
   {
      k -= sum;

      if(n & 1)cout << "YES" << endl;
      else if(k & 1) cout << "NO" << endl;
      else cout << "YES" << endl;
   }

   return ;
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