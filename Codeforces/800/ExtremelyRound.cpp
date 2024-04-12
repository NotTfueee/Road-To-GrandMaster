// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

int pre[1000000];

void solve()
{
   int n ; cin >> n;

   cout << pre[n] << endl;
   return;
}

bool isValid(int n)
{
   if(n <= 9)return true;

   int c = 0;

   while(n)
   {
      int d = n % 10;

      if(d > 0)c++;

      if(c > 1) return false;

      n /= 10;
   }

   return true;
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif


   for(int i = 0 ; i <= 1e6 ; ++i)
   {
      if(i <= 9)
      {
         pre[i] = i;
         continue;
      }

      if(isValid(i))pre[i] = pre[i-1] + 1;
      else pre[i] = pre[i-1];
   }
   int t ; cin >> t;
   while(t--)solve();

   return 0;
}