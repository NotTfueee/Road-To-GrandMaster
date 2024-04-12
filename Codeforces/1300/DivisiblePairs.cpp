// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <map>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n ; cin >> n ;
   long long x , y ; cin >> x >> y;

   map<pair<int , int> , int > map;

   vector<long long > v(n);
   long long ans = 0;

   for(int i = 0 ; i < n ; ++i)
   {
      cin >> v[i];
   }

   for(int i = 0 ; i < n ; ++i)
   {
      int v1 = v[i] % x , v2 = v[i] % y;

      int r1 = (x - v1)%x , r2 = v2;

      ans += (map[{r1 , r2}]);

      map[{v1 , v2}]++;

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
   int t ; cin >> t ;

   while(t-- ) solve();

   return 0;
}