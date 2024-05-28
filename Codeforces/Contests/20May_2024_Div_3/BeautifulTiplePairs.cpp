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

    vector< map< pair < int , int>  , vector< int > > > maps(3);

    for(int i = 0 ; i < n - 2 ; ++i)
    {
        pair ab = {v[i] , v[i+1]};
        pair bc = {v[i+1] , v[i+2]};
        pair ac = {v[i] , v[i+2]};

        maps[0][ab].push_back(v[i+2]);
        maps[1][bc].push_back(v[i]);
        maps[2][ac].push_back(v[i+1]);
    }

    long long ans = 0;

    for(auto mp : maps)
    {
        for(auto &[key , val] : mp)
        {
            long long c = 0 , sz = val.size();
            map<int , int> temp;

            for(int i = 0 ; i < sz ; ++i)
            {
                long long total = (sz - 1 - i);
                total -= temp[val[i]];
                temp[val[i]]++;

                c += total;
            }

            ans += c;
        }
    }

    cout << ans << endl;
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
