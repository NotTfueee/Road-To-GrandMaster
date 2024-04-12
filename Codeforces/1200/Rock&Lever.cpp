// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <vector>


using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n ;

   vector<int> v(n) , vis(n , 0);

   for(int i = 0 ; i < n ; ++i)
   {
      cin >> v[i];
   }

   long long ans = 0 ;

   for(int i = 31 ; i >= 0 ; --i)
   {
      long long mask = 1 << i;

      long long count = 0;

      for(int j = 0 ; j < n ; ++j)
      {
         if(!vis[j] && (v[j] & mask) == mask)
         {
               count ++;
               vis[j] = 1;
         }
      }

      ans += (count * (count - 1)/2);
   }
   
   cout << ans << endl;
   return ;
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