// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n , k ; cin >> n >> k;

   vector<int>v(n);

   for(int i = 0 ; i < n ; ++i)
   {
      cin >> v[i];
   }

   sort(v.begin() , v.end());

   int sum = 0;

   for(int i = 0 ; i < n ; ++i)
   {
      if(k > 0 && (7-v[i]) > v[i])
      {
         sum += (7-v[i]);
         k--;
      }
      else sum += v[i];
   }

   cout << sum << endl;
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
