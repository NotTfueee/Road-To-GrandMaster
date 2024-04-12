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

   for(auto&i : v)cin >> i;

   sort(v.begin() , v.end());

   vector<int> a , b;
   a.push_back(v[0]);

   int i = 1;
   while(i < n && v[i] == a.back())
   {
      a.push_back(v[i]);
      i++;
   }

   if(i == n)
   {
      cout << -1 << endl;
      return;
   }

   for(; i < n ; ++i)
   {
      b.push_back(v[i]);
   }

   cout << a.size() << " " << b.size();
   cout << endl;

   for(auto i : a)cout << i << " ";
   cout << endl;
   for(auto i : b) cout << i << " ";
   cout << endl;
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