// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void print(vector<int>&v)
{
   for(auto i : v) cout << i << " ";
   cout << endl;
   return;

}
void solve()
{

   int n , k ; cin >> n >> k;

   if(n == 1)
   {
      cout << k << endl;
      return;
   }

   int setBit = 0;

   for(int i = 0 ; i < 32 ; ++i)
   {
      if((k >> i) & 1)setBit = i;
   }

   int allSet = (1 << setBit)-1;
   int remaining = k - allSet ;

   cout << allSet << " " << remaining << " ";
   for(int i = 2 ; i < n ; ++i)cout << 0 << " ";

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

   int t ; cin >>t ;

   while(t-- )solve();
}
