//File Created by -- > ANRAG
//Created On -- > 22/06/24,Sat,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n;

    int a = 0 , b = 0;
    while(n--)
    {
        string s ; cin >> s;

        if(s == "Takahashi")a++;
        else b++;
    }

    cout << a << endl;
    return;
}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

 solve();
}
