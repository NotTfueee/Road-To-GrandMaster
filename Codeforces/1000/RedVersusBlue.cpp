//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{

    int n , r , b ; cin >> n >> r >> b;

    int regions = b + 1;

    int toPut = (r / regions) , unequal = r % regions;

    for(int i = 0 ; i < regions ; ++i)
    {
        for(int j = 0 ; j < toPut ; ++j)
        {
            cout << 'R';
        }

        if(unequal)
        {
            cout << 'R';
            unequal--;
        }

        if(i < regions - 1)cout << 'B';
    }

    cout << endl;
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
