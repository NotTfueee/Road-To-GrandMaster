// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

bool check(vector<int>&v , int val )
{

   int l = 0 , r = v.size() - 1;

   while(l <= r)
   {
      if(v[l] == val)
      {
         l++;
         continue;
      }

      if(v[r] == val)
      {
         r--;
         continue;
      }

      if(v[l] != v[r])return false;

      l++;
      r--;
      
   }

   return true;
}

void solve()
{
   int n ; cin >> n ;

   vector<int>v(n);
   for(auto&i : v)cin >> i; 

   bool f = true;

   for(int i = 0 ; i < n ; ++i)
   {
      if(v[i] != v[n-1-i])
      {
         f = check(v , v[i]) || check(v , v[n-1-i]);
         break;
      }
   }

   cout << ((f == true) ? "YES" : "NO") << endl;
   return ;
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