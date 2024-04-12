// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/


void solve()
{
   int n ; cin >> n;

   vector<long long> v(n);

   for(auto &i : v)cin >> i;

   long long gcdEven = v[0];
   for(int i = 2 ; i < n ; i+=2)
   {
      gcdEven = __gcd(gcdEven , v[i]);
   }

   long long gcdOdd  = v[1];
   for(int i = 3 ; i < n ; i+= 2)
   {
      gcdOdd = __gcd(gcdOdd , v[i]);
   }

   bool odd = true , even = true;
   for(int i = 0 ; i < n ; ++i)
   {
      if(!(i&1))
      {
         if(v[i] % gcdOdd == 0)odd = false;
      }
      else
      {
         if(v[i] % gcdEven == 0)even = false;
      }
   }

   if(!odd && !even)cout << 0 << endl;
   else if(odd)cout << gcdOdd << endl;
   else cout << gcdEven << endl;

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

   while(t--) solve();

   return 0;
}