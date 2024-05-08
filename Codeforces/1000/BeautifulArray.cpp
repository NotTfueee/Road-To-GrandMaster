//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    long long n , k , b , s; cin >> n >> k >> b >> s;

    long long mn = k * b , mx = mn + (n * (k-1));

    if(s > mx || s < mn)
    {
        cout << -1 << endl;
        return;
    }

    vector<long long > v(n);

    v[0] = mn;
    s -= mn;

    for(int i = 0 ; i < n ; ++i)
    {
        long long curr = min(k-1 , s);
        v[i] += curr;
        s -= curr;
    }

    for(auto i : v)cout << i << " ";
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
