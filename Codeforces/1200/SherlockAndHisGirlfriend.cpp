// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

const int space = 1e5+2;
vector<bool> s(space , 1);

void seive()
{
   for(int i = 2 ; i * i <= space ; ++i)
   {

      if(s[i] == 0)continue;

      for(int j = i * i ; j <= space ; j += i) s[j] = 0;
   }
}
void solve()
{
   int n ;cin >> n ;

   if(n > 2)cout << 2 << endl;
   else cout << 1 << endl;

   for(int i = 2 ; i <= n + 1; ++i)
   {
      if(s[i])cout << 1 << " ";
      else cout << 2 << " ";
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
   seive();
   solve();
}
