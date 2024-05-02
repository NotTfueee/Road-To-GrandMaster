//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int x ; cin >> x;

    int mx = 0 , num = -1;
    for(int i = 1 ; i < x ; ++i)
    {
        int gc = __gcd(x , i);
        gc += i;
        
        if(mx < gc)
        {
            mx = gc ;
            num = i;
        }
    }

    cout << num << endl;
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
