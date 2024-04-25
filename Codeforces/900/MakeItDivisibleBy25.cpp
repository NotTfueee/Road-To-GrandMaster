// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   long long n ; cin >> n;

   if(n % 25 == 0)
   {
      cout << 0 << endl;
      return;
   }

   string s = to_string(n);

   set<string> set;
   set.insert("00");set.insert("25"); set.insert("50"); set.insert("75");

   n = s.size();

   int mn = INT_MAX;

   for(int i = 0 ; i < n-1 ; ++i)
   {
      if(s[i] == '0' || s[i] == '2' || s[i] == '5' || s[i] == '7')
      {
         for(int j = i ; j < n ; ++j)
         {
            if(i == j)continue;

            string curr; 
            curr.push_back(s[i]);
            curr.push_back(s[j]);

            if(set.find(curr) != set.end())
            {
               int len = (j - i - 1) + (n - 1 - j);
               mn = min(mn , len);
            }
         }
      }
   }


   cout << mn << endl;
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
