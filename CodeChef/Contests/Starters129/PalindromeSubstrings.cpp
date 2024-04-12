// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{

   int n ; cin >> n;
   string s ; cin >> s;

   if(n==1)
   {
      cout << "Bob" << endl;
      return;
   }

   long long z = 0 , o = 0;

   for(auto c : s)
   {
      if(c == '0')z++;
      else o++;
   }

   long long diff = abs(z - o);

   if(!(n&1))
   {
      if(diff >= 2)cout << "Alice" << endl;
      else cout << "Bob" << endl;
   }
   else 
   {
      if(diff >= 2) cout << "Bob" << endl;
      else cout << "Alice" << endl;
   }
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

   int t; cin >> t;

   while(t--)solve();
}