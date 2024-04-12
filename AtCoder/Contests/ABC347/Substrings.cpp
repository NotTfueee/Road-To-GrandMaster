// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void print(vector<int>&v)
{
   for(auto i : v) cout << i << " ";
      cout << endl;
   return;
}

void solve()
{
   string s ; cin >> s;

   int n = s.size() , total = (n * (n + 1))>>1 , c = 0;

   set<string> set;

   for(int i = 0 ; i < n ; ++i)
   {
      string curr;
      curr += s[i];

      if(set.find(curr) != set.end())c++;
      else set.insert(curr);

      for(int j = i+1 ; j < n ; ++j)
      {
         curr += s[j];

         if(set.find(curr) != set.end())c++;
         else set.insert(curr);
      }
   }


   total -= c;

   cout << total << endl;
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

   solve();
}