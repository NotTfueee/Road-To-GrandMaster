// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n; 

   long long a = n , b = n;
   long long shifter = 0;

   for(int i = 0 ; i < 32 ; ++i)
   {
      if((n >> i) & 1)
      {
         shifter = i;
      }
   }

   shifter++;

   b <<= shifter;
   b |= a;

   cout << a << " " << b << endl;
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