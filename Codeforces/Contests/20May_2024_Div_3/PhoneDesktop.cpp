//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int x , y ; cin>> x >> y;

    int stt = ceil(y / (double)2);

    int remain = (15 * stt) - (4 * y);

    if(x < remain)
    {
        cout << stt << endl;
        return;
    }

    x -= remain ;

    int r = ceil(x / (double)15);
    cout << stt + r << endl;
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
