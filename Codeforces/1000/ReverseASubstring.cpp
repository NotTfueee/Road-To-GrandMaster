// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n ; cin >> n ; 
   string s ; cin >> s;

   for(int i = 0 ; i < n - 1 ; ++i)
   {
      if(s[i] > s[i+1])
      {
         cout << "YES" << endl;
         cout << i + 1 << " " << i + 2 << endl;
         return ;
      }
   }

   cout << "NO" << endl;
   return ;
} 

/*----------------------------------------------------------------------------------------*/
 
int main()
{
 
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif
   solve();

   return 0;
}