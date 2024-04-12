// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

int grid[10][10];

void solve()
{

   int ans = 0 ;
   for(int i = 0 ; i < 10 ; ++i)
   {
      string s ; cin >> s;
      int n = s.size();

      for(int j = 0 ; j < n ; ++j)
      {
         if(s[j] == 'X')ans += grid[i][j];
      }
   }

   cout << ans << endl;
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif


   for(int i = 0 ; i < 10 ; ++i)
   {
      for(int j = 0 ; j < 10 ; ++j)
      {
         if(i == 0 || i == 9 || j == 0 || j == 9)grid[i][j] = 1;
         else if(i == 1 || i == 8 || j == 1 || j == 8)grid[i][j] = 2;
         else if(i == 2 || i == 7 || j == 2 || j == 7)grid[i][j] = 3;
         else if(i == 3 || i == 6 || j == 3 || j == 6)grid[i][j] = 4;
         else grid[i][j] = 5;
      }
   }

   int t ; cin >> t;
   while(t-- ) solve();

   return 0;
}