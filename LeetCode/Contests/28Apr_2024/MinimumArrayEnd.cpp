//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    long long n , x ; cin >> n >> x;

    vector<int> off;

    for(int i = 0 ; i < 64 ; ++i)
    {
        if(!((x >> i) & 1))off.push_back(i);
    }

    --n;

    int j = 0;

    for(int i = 0 ; i < 64 ; ++i)
    {
        if((n >> i )& 1)
        {
            long long num = (1LL << off[j]);
            x += num ;
        }
        j++;
    }

    cout << x << endl;
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
