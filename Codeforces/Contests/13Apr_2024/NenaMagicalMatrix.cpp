// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve() 
{
   long long n ; cin >> n ;

   long long sum = 0 ;

   for(int i = 1 ; i <= n ; ++i)sum += (i * (2 * i - 1));

   cout << sum << " " << 2*n - 1 << endl;

   for(int i = n ; i > 0 ; --i)
   {
      cout << 1 << " " << i << " ";
      for(int j = 1 ; j <= n ; ++j)cout << j << " ";
      cout << endl;

      if(i-1 > 0)
      {
         cout << 2 << " " << i - 1 << " ";
         for(int j = 1 ; j <= n ; ++j)cout << j << " ";
         cout << endl;
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

   int t ; cin >> t;

   while(t--)solve();
}