// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n ;
   string s ; cin >> s;

   unordered_set<char>set;
   int ans = 0 ;

   for(int i = 0 ; i < n ; ++i)
   {
      if(set.find(s[i]) == set.end())
      {
         ans += (n-i);
         set.insert(s[i]);
      }
   }

   cout << ans << endl;
   return ;


}

/*----------------------------------------------------------------------------------------*/
 
int main()
{
 
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int t ; cin >> t ;

   while(t--) solve();
   return 0;
}