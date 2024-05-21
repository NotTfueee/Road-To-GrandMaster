//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n;

    int mx = n-1 , i = 31;

    for( ; i >= 0 ; --i)
    {
        if((mx >> i) & 1)break;
    }

    int num = (1 << i);

    i = 1;
    for(; i < num ; ++i)cout << i << " ";
    cout << 0 << " " << num << " ";
    i = num + 1;
    for( ; i < n ; ++i)cout << i << " ";
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


  solve();
}
