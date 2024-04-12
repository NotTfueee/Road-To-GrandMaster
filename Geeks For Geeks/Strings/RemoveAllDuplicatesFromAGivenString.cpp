// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
string solve(string s)
{
   unordered_set<char>set;
   string ans = "";
   int n = s.size();
    
   for(int i = 0 ; i < n ; ++i)
   {
      if(set.find(s[i]) == set.end())
      {
         ans += s[i];
      }

      set.insert(s[i]);
   }

   return ans;
}

/*----------------------------------------------------------------------------------------*/
 
int main()
{
 
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   string s ; cin >> s;


   cout << solve(s) << endl;

   return 0;
}