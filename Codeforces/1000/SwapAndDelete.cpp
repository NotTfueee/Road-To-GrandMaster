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
   string s; cin >>s;

   int z = 0 , o = 0 , n = s.size();

   for(auto i : s)
   {
      if(i == '0')z++;
      else o++;
   }

   for(int i = 0 ; i < n ; ++i)
   {

      if(s[i] == '1' && z > 0)z--;
      else if(s[i] == '0' && o > 0)o--;
      else break;
   }

   cout << o + z << endl;
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