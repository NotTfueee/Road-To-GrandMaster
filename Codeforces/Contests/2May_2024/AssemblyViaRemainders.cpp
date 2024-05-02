//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve() 
{
    long long n;
    cin >> n;

    vector<long long> x(n + 1);

    for (long long i = 2; i <= n; ++i)cin >> x[i];

    x[1] = 501;

    cout << x[1] << " ";
    for(int i = 2 ; i <= n ; ++i)
    {
        x[i] = x[i-1] + x[i];
        cout << x[i] << " ";
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
