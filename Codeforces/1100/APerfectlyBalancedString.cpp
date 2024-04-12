// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   string s ; cin >> s;

   set<char> set;

   for(char c : s)set.insert(c);

   int diff = set.size();

   for(int i = 0 ; i < s.length() ; ++i)
   {
      if(i + diff < s.length())
      {
         if(s[i] != s[i+diff])
         {
            cout << "NO" << endl;
            return ;
         }
      }
   }

   cout << "YES" << endl;
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
   while(t--)solve();


   return 0;
}