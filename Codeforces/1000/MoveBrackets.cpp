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

   stack<char> st;
   for(int i = 0 ; i < n ; ++ i)
   {
      if(st.empty())
      {
         st.push(s[i]);
         continue;
      }

      if(s[i] == ')')
      {
         if(st.top() == '(')
         {
            st.pop();
         }
         else st.push(s[i]);
      }
      else st.push(s[i]);
   }


   cout << (st.size()>>1) << endl;
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