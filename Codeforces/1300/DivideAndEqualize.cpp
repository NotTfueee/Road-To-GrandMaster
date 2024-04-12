// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void prime(unordered_map<int , int>& map , int n )
{

   while(n % 2 == 0)
   {
      n /= 2;
      map[2]++;
   }

   for(int i = 3 ; i * i <= n ; i += 2)
   {
      while(n % i == 0)
      {
         n /= i;
         map[i]++;
      }
   }


   if(n > 1)map[n]++;
}

void solve()
{
   int n ; cin >> n ;

   vector<int> v(n);
   unordered_map<int, int>map;

   for(int i = 0 ; i < n ; ++i)
   {
      cin >> v[i];

      prime(map , v[i]);
   }

   for(auto i : map)
   {
      if(i.second % n != 0)
      {
         cout << "NO" << endl;
         return;
      }
   }

   cout << "YES" << endl;
   return;
}

/*----------------------------------------------------------------------------------------*/
 
int main()
{
 
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif


   int t ; cin >> t;

   while(t--) solve();

   return 0;
}