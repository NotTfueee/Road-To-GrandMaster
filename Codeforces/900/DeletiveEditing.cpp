// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   string s , t ; cin >> s >> t;

   vector<int>sc(26 , 0) , tc(26 , 0);
   for(auto c : s)sc[c-'A']++;
   for(auto c : t)tc[c-'A']++;

   string ans = "";
   for(char c : s)
   {
      if(sc[c-'A'] > tc[c-'A'])sc[c-'A']--;
      else ans.push_back(c);
   }

   cout << (ans == t ? "YES" : "NO") << endl;
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
   while(t--) solve();
   return 0;
}