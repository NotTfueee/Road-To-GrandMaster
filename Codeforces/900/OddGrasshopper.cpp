// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{

   long long x , n ; cin >> x >> n;

   long long d , mod = n % 4;

    if(mod == 0)d = 0;
    if(mod == 1)d = -n;
    if(mod == 2)d = 1;
    if(mod == 3)d = n+1;

    if(x&1)cout << x - d << endl;
    else cout << x + d << endl;
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

   int t ; cin >> t;
   while(t--)solve();
}
