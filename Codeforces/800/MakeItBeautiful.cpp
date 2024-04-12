// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void print(vector<int>& v)
{
   for(auto i : v)cout << i << " ";
      cout << endl;
   return;
}

void solve()
{
   int n ;cin >> n ;

   vector<int> v(n);
   for(int i = 0 ; i < n ; ++i) cin >> v[i];

   sort(v.rbegin() , v.rend());

   set<int> set;
   
   for(auto i : v) set.insert(i);

   if(set.size() == 1)
   {
      cout << "NO" << endl;
      return;
   }

   cout << "YES" << endl;
   cout << v[n-1] << " ";
   for(int i = 0 ; i < n-1 ; ++i)
   {
      cout << v[i] << " " ;
   }
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
   while(t--)solve();
   return 0;
}