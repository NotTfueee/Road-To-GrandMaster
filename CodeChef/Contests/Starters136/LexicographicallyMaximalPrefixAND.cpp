//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n ;
    vector<int> v(n) , ans , used(n , 0);

    for(auto&i : v) cin >> i;
    sort(v.begin() , v.end());
    reverse(v.begin() , v.end());

    ans.push_back(v[0]);
    used[0] = 1;

    while(ans.size() != n)
    {
        int mx = 0 , currAnd = ans.back();

        for(int j = 0 ; j < n ; ++j)
        {
            if(!used[j])
            {
                mx = max(mx , currAnd & v[j]);
            }
        }

        vector<int>idx;

        for(int j = 0 ; j < n ; ++j)
        {
            if(!used[j])
            {
                if((currAnd & v[j]) == mx)
                {
                    ans.push_back(mx);
                    idx.push_back(j);
                }
            }
        }

        for(auto j : idx)used[j] = 1;
    }

    for(auto i : ans)cout << i << " ";
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
