// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   string s ; cin >> s;
   s += s;

   int count = 0 , mx = 0;
   for(char c : s)
   {
      if(c == '1')count ++;
      else count = 0;

      mx = max(mx , count);
   }

   long long n = s.size() / 2;

   if(mx > n)cout << n * n << endl;
   else
   {
      long long l = (mx + 1) >> 1;
      long long r = (mx + 2) >> 1;


      cout << l * r << endl;
   }
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
   while(t-- ) solve();

   return 0;
}