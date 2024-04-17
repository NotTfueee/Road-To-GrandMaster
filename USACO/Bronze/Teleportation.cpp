// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int a , b , x , y ; cin >> a>> b >> x >> y;

    if(x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    if(a > b)
    {
        int temp = a ;
        a = b;
        b = temp;
    }

    int d1 = abs(a - b);
    int d2 = abs(a - x) + abs(b - y)

    cout << min(d1 , d2) << endl;

    return;    
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("teleport.in","r",stdin);
   freopen("teleport.out","w",stdout);
#endif

   solve();
}