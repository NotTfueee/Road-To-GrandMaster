// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

bool check(vector<int>&sf , vector<int>&tf)
{
   for(int i = 0 ; i < 26 ; ++i)
   {
      if(sf[i] != tf[i])return false;
   }

   return true;
}


void solve()
{
   string s , t ; cin >> s >> t;

   vector<int> sf(26 , 0) , tf(26 , 0);
        
        int ans = 0;
        for(int i = 0 ; i < s.length() && i < t.length() ; ++i)
        {
            sf[s[i] - 'a']++;
            tf[t[i] - 'a']++;
            if(check(sf , tf))
            {
                ans ++;
                sf.clear();
                tf.clear();
            }
        }

        cout << ans << endl;
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