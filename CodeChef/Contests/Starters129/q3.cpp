// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n;

   long long p = 1 , oc = 0 , tc = 0;

   for(int i = 0 ; i < n ; ++i)
   {
      int x ; cin >> x;

      p *= x;

      if(x == 1)oc++;
      else tc++;
   }


   if(tc % 8 == 0)cout << "YES" << endl;
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

   int t; cin >> t;

   while(t--)solve();
}