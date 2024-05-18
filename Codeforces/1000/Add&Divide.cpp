//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int a , b ; cin >> a >> b;

    int mn = INT_MAX;

    for(int i = (b == 1 ? 1 : 0) ; i <= 5 ; ++i)
    {
        int t = a , tb = b + i , c = 0 ;

        while(t)
        {
            c++;
            t/= tb;
        }

        mn = min(mn , c + i);
    }

    cout << mn << endl;
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
