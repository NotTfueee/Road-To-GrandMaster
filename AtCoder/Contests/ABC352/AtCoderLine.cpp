//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , x, y , z ; cin >> n >> x >> y >> z;

    // moving from left to right

    if(x <= y)
    {
        if(z >= x && z <= y)cout << "Yes" << endl;
        else cout << "No" << endl;
    } 
    else 
    {
        if(z <= x && z >= y) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

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
