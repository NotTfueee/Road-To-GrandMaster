// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
 
/*----------------------------------------------------------------------------------------*/

void print(vector<int>&v)
{
   for(auto i : v) cout << i << " ";
   cout << endl;

   return;
}
void solve()
{
   int n ; cin >> n ;
   vector<int>v(n);

   for(auto&i : v) cin>> i;

   vector<int> idx;

   int l = 0 , r = 1e9;

   for(int i = 1 ; i < n ;)
   {
      if(v[i] < v[i-1])
      {
         if(i != n-1)
         {
            l = max(l , v[i-1] - v[i]);
            r = min(r , v[i+1] - v[i]);
         }
         else l = min(l , v[i-1] - v[i]);

         idx.push_back(i);
         i += 2;
      }
      else i++;
   }

   if(l > r)
   {
      no;
      return;
   }

   if(idx.size() > 0)
   {
      for(int i = 0 ; i < int(idx.size()) ; ++i)
      {
         v[idx[i]] += r;
      }
   }

   if(is_sorted(v.begin() , v.end()))
   {
      yes;
   }
   else no;

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
   while(t-- ) solve();
}