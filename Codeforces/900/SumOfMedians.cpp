// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   long long n , k ; cin >> n >> k;
   vector<long long> v(n*k);

   for(long long i= 0 ; i < n*k ; ++i)
   {
      cin >> v[i];
   }

   long long start = n * k - 1 , sum = 0 , prev = 0;
   for(long long i = n * k - 1 ; i >= 0 ; --i)
   {
      if(start - i == n - 1)
      {
         long long mid = (start - i + 1) >> 1;
         mid = start - mid ;

         sum += (v[mid + prev]);
         mid = mid + prev;
         prev = mid - i ;

         start = i - 1;
      }
   }

   cout << sum << endl;
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
   while(t--)solve();
}
