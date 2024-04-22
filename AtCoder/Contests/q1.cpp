// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   string s ;cin >> s;

   string ss = s.substr(3 , 3);

   int num = stoi(ss);

   if(num >= 350 || num == 316)cout << "No" << endl;
   else if(num >= 1 && num <= 349)cout << "Yes" << endl;
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
