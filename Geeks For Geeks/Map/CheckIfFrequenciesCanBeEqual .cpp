// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <map>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
bool solve(string s)
{

   vector<int> f(26 , 0);

   for(auto i : s)
   {
      f[i - 'a']++;
   }

   int cx = 0 , cy = 0 , x = -1 , y = -1;

   for(auto i : f)
   {
      if(i == 0)continue;

      if(x != i && y != i && x != -1 && y != -1)return false;

      if(x == -1 || x == i)
      {
         x = i;
         cx++;
      }
      else 
      {
         y = i;
         cy++;
      }
   }

   if(cy == 1 && y == 1 || cx == 1 && x == 1 || cy == 0 || x == 1 || y == 1) return true;
        if(cy == 1 && y - x == 1) return true;
        if(cy == 1 && y - x != 1) return false;
        if(cx == 1 && x - y == 1) return true;
        if(cx == 1 && x - y != 1) return false;
        
        return false;
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
 
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   string s; cin >> s;

   cout << solve(s) << endl;

   return 0;
}