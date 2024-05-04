// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n ;

   vector< vector<char>> a(n , vector<char> (n));
   vector< vector<char>> b(n , vector<char> (n));

   for(int i = 0 ; i < n ; ++i)
   {
      for(int j = 0 ; j < n ; ++j)
      {
         cin >> a[i][j];
      }
   }

   for(int i = 0 ; i < n ; ++i)
   {
      for(int j = 0 ; j < n ; ++j)
      {
         cin >> b[i][j];
      }
   }

   for(int i = 0 ; i < n ; ++i)
   {
      for(int j = 0 ; j < n; ++j)
      {
         if(a[i][j] != b[i][j])
         {
            cout << i+1 << " " << j+1 << endl;
            return;
         }
      }
   }

   
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