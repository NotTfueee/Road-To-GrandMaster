// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <stack>
#include <string>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   string s ; cin >> s;

   stack<char> st;
   int c = 0 , n = s.size();

   for(int i = 0 ; i < n ; ++i)
   {
      if(st.empty())
      {
         st.push(s[i]);
         continue;
      }

      if(st.top() != s[i])
      {
         c++;
         st.pop();
      }
      else st.push(s[i]);
   }

   if(c&1) cout << "DA" << endl;
   else cout << "NET" << endl;
} 

/*----------------------------------------------------------------------------------------*/
 
int main()
{
 
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif


   int t ; cin >> t;
 
   while(t--) solve();
   return 0;
}