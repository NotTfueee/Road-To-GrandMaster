// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n , s ; cin >> n >> s;

   if((s&1) || s < n || n == 1)
   {
      cout << -1 << endl;
      return;
   }

   if(s == n)
   {
      for(int i = 0 ; i < n ; ++i) cout << 1 << " ";
      cout << endl;
      return;
   }

   if(!(n&1))
   {
      for(int i = 0 ; i < n - 2 ;++i)cout << 1 << " ";

      int rem = (s - (n - 2) ) >> 1;

      cout << rem << " " << rem;
      cout << endl;
      return;

   }

   if(n == 3)
   {
      int half = (s>>1) , po2 = (half &(half - 1));

      if(!(po2))
      {
         cout << -1 << endl;
         return;
      }

      int y;

      for(int i = 0 ; i < 32 ; ++i)
      {
         if((half>>i)&1)
         {
            y = 1;
            y <<= i;
            break;
         }
      }

      cout << half << " " << y << " " << (half - y) << endl;
   }
   else 
   {
      /* 
      now for the remaining odd n we will divide n into 2 parts one is the odd 
      part and the other is the even part 

      we will fix the first odd part such that the the xor should  be 0 we have one sequence 
      that is 1 2 3 _ _ we will keep 2 places empty so that we can equally divide the 
      sum at this place so that the xor is 0 , now fill the remaining n - 5 places with 
      1 as the remaining places are now even 
      */

      /* 
      removing the sum of the first 3 elements and last n - 5 gives us the sum that we
      need to now fit into the remaining 2 positions 
      */
      
      s -= (6 + (n-5));

      if(s < 2)
      {
         cout << -1 << endl;
         return;
      }

      s >>= 1;
      cout << "1 2 3 ";
      for(int i = 0 ; i < n -5 ; ++i)cout << 1 << " ";
      cout << s << " " << s << endl;
      return;
   }



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