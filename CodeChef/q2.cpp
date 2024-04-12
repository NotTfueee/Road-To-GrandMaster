// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ;cin >> n;

   vector<int>an(n) , da(n) , ba(n) , bd(n);
   for(auto&i : an) cin >> i;
   for(auto&i : da)cin >> i;
   for(auto&i : ba) cin >> i;
   for(auto&i : bd)cin >> i;

   long long aattack = 0 , adef = 0 , battack = 0 ,bdef = 0;

   for(int i = 0 ; i < n ; ++i)
   {

      aattack += an[i];
      adef += da[i];

      battack += ba[i];
      bdef += bd[i];
   }

   if(aattack > battack && adef > bdef)cout << "A" << endl;
   else if(battack > aattack && bdef > adef)cout << "P" << endl;
   else cout << "DRAW" << endl;


}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int t; cin >> t;

   while(t--)solve();
}