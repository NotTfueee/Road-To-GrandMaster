// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n;

   vector<int> v(n);

   for(auto&i : v) cin >> i;

   stack<long long>st;

   for(int i = 0 ; i < n ; ++i)
   {
      if(st.empty())
      {
         st.push(v[i]);
         continue;
      }

      if(!st.empty() && st.top() == v[i])
      {
         st.pop();
         long long item = v[i]+1;

         while(!st.empty() && st.top() == item)
         {
            st.pop();
            item ++;
         }

         st.push(item);
      }
      else st.push(v[i]);
   }

   cout << st.size() << endl;
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