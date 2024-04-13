// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int k , q ; cin >> k >> q;
   vector<int>v(k);

   for(auto&i : v) cin >> i;

   for(int i = 0 ; i < q; ++i)
   {
      int n ; cin >> n ;

      int temp = n;

      while(temp >= v[0])
      {
         int c = 0;
         for(int j = 0 ; j < k ; ++j)
         {
            if(v[j] <= temp)c++;

         }

         temp -= c;
      }

      cout << temp << " ";
   }

   cout << endl;

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