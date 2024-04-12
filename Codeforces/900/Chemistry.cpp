// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n , k ; cin >>n >> k;
   string s ; cin >> s;


   if(n - k == 1)
   {
      cout << "YES" << endl;
      return;
   }

   map<char , int> map;

   for(auto c : s)map[c]++;

   int o = 0 , e = 0;

   for(auto i : map)
   {
      if(i.second&1)o++;
      else e++;
   }

   cout << (o > k+1 ? "NO" : "YES") << endl;

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