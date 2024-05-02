//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , m ; cin >> n >> m;

    string a , b ; cin >> a >> b;

    int l = 0 , r = 0;

    int k = 0;

    while(r < m && l < n )
    {
        if(a[l] == b[r])
        {
            l++;
            r++;
            k++;
        }
        else r++;
    }

    cout << k << endl;
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
