// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n ;

   vector<int>v(n);

   set<int> set;
   for(int i = 0 ; i < n ; ++i)
   {
      cin >> v[i];
   }
   long long ans = 0;
   for(int i = 0 ; i < n ; i ++)
   {
      if(set.find(v[i]) != set.end())
         {
            ans++;
            set.insert(v[i]);
         }
         else set.insert(v[i]);

   }

   cout << ans << endl;
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