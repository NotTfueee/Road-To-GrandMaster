// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   long long n , k , a , b ; cin >> n >> k >> a >> b;

   vector<int>x(n+1) , y(n+1);

   for(int i = 1 ; i <= n ; ++i)
   {
      cin >> x[i] >> y[i];
   }

   long long price = abs((long long)(x[a] - x[b])) + abs((long long)(y[a] - y[b]));

   long long priceA = LLONG_MAX/2 , priceB = LLONG_MAX/2;
   for(int i = 1 ; i <= k ; ++i)
   {
      priceA = min(priceA , abs((long long)(x[a] - x[i]))+abs((long long)(y[a] - y[i])));
      priceB = min(priceB , abs((long long)(x[b] - x[i])) + abs((long long)(y[b] - y[i])));
   }

   cout << min(price,  priceA + priceB) << endl;
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
   while(t--)solve();


   return 0;
}