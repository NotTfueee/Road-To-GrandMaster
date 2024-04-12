// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
  int n , m , k ; cin >> n >> m >> k;

  vector<int> left(n) , right(m);

  for(int i = 0 ; i < n ; ++i)
  {
   cin >> left[i];
  }

  for(int i = 0 ; i < m ; ++i) cin >> right[i];

   sort(left.begin() , left.end());
   sort(right.begin() , right.end());

   int ans = 0;

   for(int i = 0 ; i < n ; ++i)
   {
      for(int j = 0 ; j < m ; ++j)
      {
         int sum = left[i] + right[j];

         if(sum <= k)ans++;
      }
   }

   cout << ans << endl;

}

/*----------------------------------------------------------------------------------------*/
 
int main()
{
 
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int t ; cin >> t;

   while(t--)solve();

   return 0;
}