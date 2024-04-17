// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int a , b ; cin >> a >> b;

    int tempa = a , tempb = b;

    if(a > b)
    {
        cout << "Yes" << endl;
        return;
    }

    int ra = 0 , rb = 0;

    while(a)
    {
        int d = a % 10;
        a /= 10;

        ra = ra * 10 + d;
    }

    while(b)
    {
        int d = b % 10 ;
        b /= 10;

        rb = rb * 10 + d;
    }

    if(ra > rb || tempa > rb || ra > tempb)
    {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

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

}
