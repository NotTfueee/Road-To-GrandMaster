//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n ;
    int x ; cin >> x;

    int f = 0;
    for(int i = 2 ; i <= n ; ++i)
    {
        int z ; cin >> z;
        if(z > x)
        {
            cout << i << endl;

            return;
        }
    }

    cout << -1 << endl;
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
