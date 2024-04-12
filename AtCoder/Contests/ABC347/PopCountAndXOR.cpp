// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

long long toBin(vector<int>&v)
{
   long long ans = 0;

   for(int i = 0 ; i < 60 ; ++i)
   {
      if(v[i])
      {
         ans |= (1LL << i);
      }
   }

   return ans;
}

void solve()
{
   long long  a , b , c ; cin >> a >> b >> c;
   
   int pop = 0;
   vector<int> x(60) , y(60);
   vector<int> i0 , i1;

   for(int i= 0 ; i < 60 ; ++i)
   {
      if((c>>i)&1)
      {
         pop++;
         i1.push_back(i);
      }
      else i0.push_back(i);
   }

   int d = (a+b) - pop;

   if(d&1 || d < 0)
   {
      cout << -1 << endl;
      return;
   }

   d >>=1 ;
   a -= d;
   b -= d;

   if(a < 0 || b < 0 || d > (60 - pop))
   {
      cout << -1 << endl;
      return;
   }

   /* fill all the positions which have 0 in the binary representation of C and this 
      is possible only if the binary of x and y both either have 1 or 0 at the current 
      location
   */

   for(int i = 0 ; i < d ; ++i)
   {
      int j = i0[i];

      x[j] = y[j] = 1;
   }

   /* fill all the positions which have 1 in the binary representation of C and this is
      possible only if the binary of x and y have different bits at the current position
      so first i will fill the set bit positions in x for which there were set bits in C 
      and after that i will fill for remaining set bit positions in y 
   */

   for(int i = 0 ; i < pop ; ++i)
   {
      int j = i1[i];

      if(i < a)x[j] = 1;
      else y[j] = 1;
   }

   long long x_dec = toBin(x);
   long long y_dec = toBin(y);

   cout << x_dec << ' ' << y_dec << endl;
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

   solve();
}