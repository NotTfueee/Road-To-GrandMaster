// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{

   int a , b , c ; cin >> a >> b >> c;

   int m = -1 ;
   int m1 = (2*b) - c , m2 = c + a , m3 = (2*b) - a;

   if(m1 > 0 && (m1 % a) == 0)
   {
      m = m1 / a;
   }
   else if(m2 > 0 && (m2 % (2*b)) == 0)
   {
      m = m2 / (2*b);
   }
   else if(m3 > 0 && (m3 % c) == 0)
   {
      m = m3 / c;
   }


   if(m == -1)cout << "NO" << endl;
   else cout << "YES" << endl;

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