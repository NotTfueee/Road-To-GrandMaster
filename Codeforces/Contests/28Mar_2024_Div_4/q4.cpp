// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
vector<int> arr = {100000, 11111, 11110, 11101, 11100, 11011, 11010, 11001, 11000,
                       10111, 10110, 10101, 10100, 10011, 10010, 10001, 10000, 1111, 1110,
                       1101, 1100, 1011, 1010, 1001, 1000, 111, 110, 101, 100, 11, 10};
void solve()
{
   int n ; cin >> n;

   for(int a : arr)
   {
      while(n % a == 0)
      {
         n /= a;
      }
   }

   if(n >1)cout << "NO" << endl;
   else cout << "YES" << endl;

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