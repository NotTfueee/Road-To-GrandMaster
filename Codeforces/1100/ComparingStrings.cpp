// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   string a , b ; cin >> a >> b;

   int n = a.size() , m = b.size();

   if(n != m)
   {
      cout << "NO" << endl;
      return;
   }

   int count = 0;

   for(int i = 0 ; i < n ; ++i)
   {
      if(a[i] != b[i])count ++;
   }

   if(count == 0)
   {
      cout << "YES" << endl;
      return;
   }
   else if(count != 2)
   {
      cout << "NO" << endl;
      return;
   }

   set<char> set;

   for(int i = 0 ; i < n ; ++i)
   {
      if(a[i] != b[i])
      {
         set.insert(a[i]);
         set.insert(b[i]);
      }
   }

   if(set.size() == 2)
   {
      cout << "YES" << endl;
   }
   else cout << "NO" << endl;
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