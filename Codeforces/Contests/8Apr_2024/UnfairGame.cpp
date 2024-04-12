// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void print(vector<int>&v)
{
   for(auto i : v) cout << i << " " ;
   cout << endl;
   return;
}

void solve()
{
   int a , b , c , d ; cin >> a >> b >> c >> d;

   int ans = ((a >>1) + (b >> 1) + (c >>1) + (d>>1));

   ans += ((a%2) && (b%2) && (c%2));

   cout << ans << endl;
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
}