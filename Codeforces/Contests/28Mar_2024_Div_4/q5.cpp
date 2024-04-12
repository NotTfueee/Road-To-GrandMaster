// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void getFactors(int n , vector<int>&v)
{
   for(int i = 1 ; i * i <= n ; ++i)
   {
      if(n % i == 0)
      {
         v.push_back(i);

         if((n/i) != i)v.push_back(n/i);
      }
   }
}

void print(vector<int>&v)
{
   for(auto &i : v) cout << i << " ";

   cout << endl;
      return;
}

void solve()
{

   int n ; cin >> n ;
   string s ; cin >> s;
   vector<int>v;
   getFactors(n , v);

   sort(v.begin() , v.end());

   int mn = INT_MAX;

   for(auto i : v)
   {
      string curr;
      string back;

      while(curr.length() < n)
      {
         curr += s.substr(0 , i);
      }

      while(back.length() < n)
      {
         back += s.substr(n-i , i);
      }

      int cc = 0 , cb = 0;

      for(int j = 0 ; j < n ; ++j)
      {
         if(curr[j] != s[j])cc++;
      }

      for(int j = 0 ; j < n ; ++j)
      {
         if(back[j] != s[j])cb++;
      }

      if(cc <= 1)
      {
         mn = min(mn , i);
      }

      if(cb <= 1)
      {
         mn = min(mn , i);
      }
   }


   cout << mn << endl;

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