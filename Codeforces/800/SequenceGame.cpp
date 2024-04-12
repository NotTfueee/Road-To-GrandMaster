// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n ; cin >> n ;

   vector<int> v(n);

   for(int i = 0 ; i < n ; ++i)cin >> v[i];

   vector<int>ans;

   ans.push_back(v[0]);

   for(int i = 1 ; i < n ; ++i)
   {
      if(v[i] >= v[i-1])ans.push_back(v[i]);
      else 
      {
         ans.push_back(1);
         ans.push_back(v[i]);
      }
   }

   cout << ans.size() << endl;
   for(auto i : ans) cout << i << " " ;
      cout << endl;
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
   while(t-- ) solve();

   return 0;
}