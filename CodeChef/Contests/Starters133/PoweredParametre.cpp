//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    long long n ; cin >> n ;
    vector<long long>v(n+1);

    long long mx = 0;

    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> v[i];
        mx = max(mx , v[i]);
    }

    long long c = 0;

    for(int i = 1 ; i <= n ; ++i)
    {
        if(v[i] == 1)
        {
            c += n;
            continue;
        }

        for(int j = 1 ; j <= n ; ++j)
        {
            long long val = pow(v[i] , j);

            if(val > mx)break;

            if(val <= v[j])c++;
        }
    }

    cout << c << endl;
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
