// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

// the time complexity of this code is O(√n);
void getFactors(long long n , vector<int>& v)
{
   for(int i = 1 ; i * i <= n ; ++i)
   {
      if(n % i == 0)
      {
         v.push_back(i);

         if((n/i) != i)v.push_back(n/i);
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

   long long n ; cin >> n ;

   vector<int> v;
   getFactors(n , v);
   for(auto i :v) cout << i << " ";
   cout << endl;

   return 0;
}