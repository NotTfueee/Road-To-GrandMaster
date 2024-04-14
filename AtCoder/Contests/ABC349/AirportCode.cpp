// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   string s , t ; cin >> s >> t;

   int r = 0 ;
   for(int i = 0 ; i < s.size() && r < 3; ++i)
   {
      if(tolower(t[r]) == s[i])
      {
         r++;
      }
   }


   if(r > 2)cout << "Yes" << endl;
   else if(r == 2 && t[r] == 'X')cout << "Yes" << endl;
   else cout << "No" << endl;
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