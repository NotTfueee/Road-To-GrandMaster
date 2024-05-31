//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n ;
    vector<int> v(n);

    for(auto&i : v) cin >> i;

    int mx = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        long long sum = v[i];

        if(!(sum & 1))mx = max(mx , 1);

        for(int j = i+1 ; j < n ; ++j)
        {
            sum += v[j];

            if(!(sum & 1))mx = max(mx , j - i + 1);
        }
    }

    cout << mx << endl;
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
